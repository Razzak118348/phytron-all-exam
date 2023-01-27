#include<stdio.h>
int main()
{
   int n,k,m;
   char st[100];
   gets(st);
   scanf("%d",&n);
   
   for(int i=0;st[i]!='\0';i++)
   {
    k=st[i];
    m=k+n;
    if(m<=122)
    {
      st[i]=m;
    }
    else
    {
        m=m-122;
        k=96+m;
        st[i]=k;
    }
   }
   puts(st);
}