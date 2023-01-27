#include<stdio.h>
int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++ )
    {
        k=i;
        if(k==1)
        {
            for(int i=1;i<=n;i++)
            {
                printf("%d",i);
            }
             printf("\n");
        }
       
        else if(k==n)
        {
            for(int i=1;i<=n;i++)
            {
            printf("%d",n);
            }
             printf("\n");
        }

        else
        {
            for(int j=1;j<=n;j++)
            {
                if(j==1)
                printf("%d",k);
                
                else if(j==n)
                printf("%d",n);
                else
                printf(" ");
            }
            printf("\n");
        }
        
    }
}