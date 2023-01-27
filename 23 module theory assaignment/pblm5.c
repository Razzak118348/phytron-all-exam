#include<stdio.h>
int add_three_nums();

int main()
{
    int a,b,c=0,sum;
    scanf("%d %d",&a,&b);
    sum=add_three_nums(a,b,c);
    printf("%d",sum);
}
int add_three_nums(int a,int b,int c)
{
     return a+b+c;
}