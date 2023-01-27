#include<stdio.h>
int main()
{
    int i,j;
    int a[3][3];
    int b[10];
     
     for( i=0;i<3;i++)
    {
        for( j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
           
        }
    }
    for(i=0;i<3;i++)
    {
        int sum=0;
        for(j=0;j<3;j++)
        {
            sum=sum+a[i][j];
        }
        b[i]=sum;
       
    }
 
     for(i=0;i<3;i++)
    {
        int sum=0;
        for(j=0;j<3;j++)
        {
            sum=sum+a[j][i];
        }
        b[i+3]=sum;
       
    }
    int sum=0;
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i==j)
            {
                sum=sum+a[i][j];
            }
        }
       
       
    }
    b[6]=sum;
 
    int sum1=0;
     for(i=0,j=2;i<3;i++,j--)
    {
      sum1=sum1+a[i][j];  
    }
    b[7]=sum1;
     int k=0;
    for(int i=0;i<=7;i++)
    {
        // printf("%d ",b[i]);
        if(b[i]==b[i+1])
        {
          k++;
          continue;
        }
        else{
       printf("Not magic square");
        break;
        }
    }
    if(k>=1)
    {
        printf("Magic square");
    }
 
   
 
}