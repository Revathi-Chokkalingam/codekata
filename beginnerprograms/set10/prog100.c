#include<stdio.h>

int main(void)

{
long int n,pro=1,i;
scanf("%ld",&n);
while(n!=0)
{
pro=pro*(n%10);
n=n/10;
}
printf("%ld",pro);
return 0;
}
