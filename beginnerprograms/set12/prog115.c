#include<stdio.h>
int main(void)
{
int j,N,K,i,a[100],b[100],temp;
scanf("%d %d",&N,&K);
for(i=0;i<N;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<N;i++)
{
for(j=i+1;j<N;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printrf("%d",a[k-1]);
return 0;
}
