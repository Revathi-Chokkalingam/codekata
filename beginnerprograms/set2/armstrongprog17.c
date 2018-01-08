#include <stdio.h>

int main(void) {
	int num,result,temp,sum=0;
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
		result=num%10;
		sum=sum+(result*result*result);
		num=num/10;
	}

	if(sum==temp)
	printf("yes");
	else
	printf("no");

	
	return 0;
}
