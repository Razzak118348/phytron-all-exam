#include<stdio.h>
int main()
{
    int i;
    char st[50];
    scanf("%s",&st);
    for(i=0;st[i]!='\0';i++)
    {
        if(st[i]>='a'&& st[i]<='z')
        {
            st[i]=st[i]-32;
        }
       
       else //else if(st[i]>='A'&& st[i]<='Z')
        st[i]=st[i]+32;
    }
    printf("%s",st);
}