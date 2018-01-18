#include<stdio.h>
int main(void)
{
int N,M;
int mul;
scanf("%d %d",&N,&M);
mul=N*M;
if(mul%2==0)
printf("even");
else
printf("odd");
return 0;
}
