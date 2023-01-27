#include<stdio.h>
int main()
{
    int i,j,d,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int k,count=0;
        scanf("%d ",&k);
        char st[1005];
        // for(j=0;j<k;j++)
        // {
        //     scanf(" %c",&st[j]);
        // }
        gets(st);
        for(j=0;j<k-1;j++)
        {
            if(st[j]=='0' && st[j+1]=='1') 
            count++;
        }
        for(d=0;d<k-1;d++)
        {
            if(st[d]=='1' && st[d+1]=='0')
             count++;
        }
        printf("%d\n",count);
    }
}