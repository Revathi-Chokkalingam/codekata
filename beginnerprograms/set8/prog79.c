#include<stdio.h>
#include<math.h>
int main(void)
{
int a,b,mul;
scanf("%d %d",&a,&b);
mul=a*b;
int i,count=0;
for(i=0;;i++)
{
if(mul==pow(i,2))
count++;
}
if(count!=0)
printf("yes");
else
printf("no");
return 0;
}
