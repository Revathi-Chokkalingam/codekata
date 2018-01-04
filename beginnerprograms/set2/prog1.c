#include <stdio.h>

int main(void){
	int num,pow,result;
	scanf("%d",&num);
	pow=num;
	for(int i=1;i<=pow;i++)
	{
		num=num*pow;
	}
	printf("%d",num);

	return 0;
}
