#include<stdio.h>
int main()
{
  int i,n,k;
  scanf("%d %d",&n,&k);
  int freq_ary[n];
  for(i=0;i<n;i++)
  {
    freq_ary[i]=0;
  }
//  even_number(n);
//  odd_number(n);
int index=0;
for(int i=1;i<=n;i++)
{
   if(i%2==0)
   { freq_ary[index]=i;
    index++;}
}
for(int i=1;i<=n;i++)
{
    if(i%2!=0) 
    {freq_ary[index]=i;
    index++;
    }
}
for(int i=0;i<n;i++)
{
    printf("%d ",freq_ary[i]);
}
printf("\nThe %dth element in this sequence is %d",k,freq_ary[k-1]);

}