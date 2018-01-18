include<stdio.h>
int main(void)
{
long int n,count=0;
scanf("%ld",&n);
while(n!=0)
{
n=n/10;
count++;
}
printf("%ld,count);
return 0;
}
