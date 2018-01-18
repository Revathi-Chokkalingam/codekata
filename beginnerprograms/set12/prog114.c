#include<stdio.h>
int main(void)
{
int N,K,i,a[100],b[100],j;
scanf("%d %d",&N,&K);
for(i=0;i<N;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<N;i++)
{
for(j=i+1;j<=N;j++)
{
if(a[i]%2!=0)
{
b[j]=a[i];
}
}
}
printf("%d",b[k-1]);
return 0;
}
