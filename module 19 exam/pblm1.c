#include<stdio.h>
int main()
{
    long long int a,n;
    scanf("%lld",&n);
    if(n%3==0)
    {
        a=n/3;
        printf("%lld",a);
    }
    else printf("-1");
}