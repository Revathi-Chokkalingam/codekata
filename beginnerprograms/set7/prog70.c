#include<stdio.h>
int main(void)
{
int n,count=0,x=1,pow=2;
scanf("%d",&n);
while(n!=1)
{
n=n/2;
count++;
}
for(int i=0;i<count+1;i++)
{
x=x*pow;
}
printf("%d",x);
return 0;
}
