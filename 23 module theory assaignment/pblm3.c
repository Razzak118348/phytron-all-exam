#include<stdio.h>
int main()
{
    int ary[100],n=0;
    for(int i=0;i<100;i++)
{
    scanf("%d",&ary[i]);
}
for(int i=0;i<100;i++)
{
    if(ary[i]==1|| ary[i]==7||ary[i]==9)
    n++;
}
if(n>=3)
printf("YES");
else printf("NO");

}