#include<stdio.h>
int grade(int n)
{
    char ch;
    if(n>=80)
    { 
        ch='A';
        return ch;
    }
    else if(60<=n && n<=79)
    {
        ch='B';
        return ch;
    }
    else if(40<=n&& n<=59)
    {
       ch='C';
       return ch;
    }
    else 
    {
        ch='F';
        return ch;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    char k=grade(n);
    printf("%c",k);
}