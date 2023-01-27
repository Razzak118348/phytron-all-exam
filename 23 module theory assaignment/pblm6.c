#include<stdio.h>
int fact(int n)
{   long long int k=1;
    for(int i=n;i!=0;i--)
    k=k*i;
    return k;
}
int ratio(int a,int b)
{
    return fact(a)/fact(b);
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
   long long int k= ratio(a,b);
printf("%lld",k);
}