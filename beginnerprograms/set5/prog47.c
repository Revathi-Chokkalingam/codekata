#include<stdio.h>
int main(void)
{
int n,i,a[100];
int min,max;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
min=a[0];
max=a[0];
}
for(i=0;i<n;i++)
{
if(a[i]<min)
min=a[i];
if(a[i]>max)
max=a[i];
}
printf("%d %d",min,max);
return 0;
}
