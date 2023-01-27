#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter the 2d matrix size:");
    scanf("%d %d",&m,&n);
    int ary1[m][n],ary2[n][m];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&ary1[i][j]);
            ary2[j][i]=ary1[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",ary2[i][j]);
        }
        printf("\n");
    }
}