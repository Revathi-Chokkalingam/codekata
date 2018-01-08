#include <stdio.h>

int main(void) {
	long int a,b;
	scanf("%ld %ld",&a,&b);
	if(a<100000&&b<100000)
	{
	long int i;
	for(i=a+1;i<=b;i++)
	{
		if(i%2!=0)
		printf("%ld ",i);
	}
	}
	else
	
	return 0;
}
