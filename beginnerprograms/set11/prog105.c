#include<stdio.h>
int main(void)
{
	int n,d;
	scanf("%d",&n);
	
	if(n==1)
	{
	printf("%c",65);
	}
	else if(n!=1)
	{
	d=n-1;
	printf("%c",65+d);
	}
return 0;
}
