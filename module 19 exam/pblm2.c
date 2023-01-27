#include<stdio.h>
int main()
{
    int a,b,i,sum=0;
    char s[20];
    gets(s);
    scanf("%d %d",&a,&b);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='*') sum=sum+(a*b);
        else if (s[i]=='+') sum =sum+(a+b);
    }
    printf("%d",sum);
}