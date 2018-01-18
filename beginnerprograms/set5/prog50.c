#include<stdio.h>
int main(void)
{
int n,temp,count=0,x=1,pow=2;
scanf("%d",&n);
temp=n;
while(n!=1)
{
n=n/2;
count++;
}
for(int i=0;i<count;i++)
{
x=x*pow;
}
if(x==temp)
printf("yes");
else
printf("no");
return 0;
}
