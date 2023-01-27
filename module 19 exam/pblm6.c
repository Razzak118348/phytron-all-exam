#include<stdio.h>
#include<string.h>
int main()
{
    int i,n;
    char st[110];
    scanf("%d ",&n);//ekhane %d er por ekta space dite hobe nahole enter soho input nibe,,so output rong asbe;
  
    fgets(st,sizeof(st),stdin);

    int l=strlen(st);
    int freq[5];
    for(i=0;i<5 ;i++)
    {
        freq[i]=0;
    }
    for(int i=0;i<l-1;i++)
    {
        freq[(st[i]-'+')+1]++;
    }
    int max=freq[0];
    for(int i=0;i<5;i++)
    {
        if(freq[i]>max)
        {
            max=freq[i];
        }
    }
    printf("%d\n",max);
    
}
