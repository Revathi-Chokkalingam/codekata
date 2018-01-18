#include<stdio.h>
int main(void)
{
long int a,b,count=0,p,temp;
scanf("%ld %ld",&a,&b);
temp=b;
while(b!=0)
{
b=b/10;
count++;
}

p=(pow(10,count));
a=a*p;
sum=a+temp;
printf("%ld",sum);
return 0;
}
