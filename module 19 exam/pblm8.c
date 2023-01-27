#include<stdio.h>
int main()
{
    int n,a=0,b=0,sum=0;
    scanf("%d",&n);
    int ary[21];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ary[i]);
    }
    int even[21],odd[21],freq[30];
    for(int i=0;i<n;i++)
    {
        even[i]=0;
        odd[i]=0;
        freq[i]=0;
    }
    int ec=0,odc=0;
    for(int i=0;i<n;i++)
    {
        if(ary[i]%2==0)
        {
        even[i]=ary[i];
        ec++;
        }
        else 
        {odd[i]=ary[i];
        odc++;}
    }
   int  max=even[0],maxindx=0;
    for(int i=0;i<n;i++)
    {
         if(even[i]>max)
         {
            max=even[i];
            maxindx=i;
            a=max;
         }
    }
    even[maxindx]=0;
    max=even[0];
      for(int i=0;i<n;i++)
    {
         if(even[i]>max)
         {
            max=even[i];
            maxindx=i;
            b=max;
         }
    }
    sum=sum+a+b;

 if(odc!=0)
 {
   for(int i=0;i<n;i++)
   { 
     for(int j=i+1;j<n;j++)
     {
     int k=odd[i]+odd[j];
     if(k%2==0)
     freq[i]=k;
     }
   }
 }
 int max2=sum;
 for(int i=0;i<n;i++)
 {
    if(freq[i]>max2)
    {
        max2=freq[i];
    }
 }
printf("%d",max2);


}