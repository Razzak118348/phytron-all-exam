#include<stdio.h>
int main()
{
    int a[15];
    // for(int i=0;i<=14;i++)
    // {
    //     scanf("%d",&a[i]);
    // }
    a[0]=1;
    for(int i=1;i<15;i++)
    {
        a[i]=a[i-1]*2;
    }
    for(int i=0;i<=14;i++)
    {
        printf("%d ",a[i]);
    }
}