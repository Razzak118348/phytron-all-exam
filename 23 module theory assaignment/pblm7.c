#include<stdio.h>
int median(int n,int ary[n])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(ary[j]>ary[j+1])
            {
                int flag=ary[j];
                ary[j]=ary[j+1];
                ary[j+1]=flag;
            }
        }
       
    }
    if(n%2!=0)
    {
       return ary[(n-1)/2];
    }
    else
    {
        return (ary[(n-2)/2]+ary[n/2])/2;
    }

}

int main()
{
   int n;
   printf("Input the size of array :");
   scanf("%d",&n);
   int ary[n];
   for(int i=0;i<n;i++)
   {
    scanf("%d",&ary[i]);
   }
int k= median(n,ary); 
   printf("%d",k);
}