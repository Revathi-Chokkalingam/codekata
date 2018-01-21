#include<stdio.h>
#include<string.h>
int main(void)

{
int N;
scanf("%d",&N);
if(N>=1&&N<=10)
{
while(N%2==0)
{
	N=N/2;
}
}
printf("%d",N);
	return 0;
}
