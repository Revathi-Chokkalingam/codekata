#include <stdio.h>

int main(void) {
	int num1,num2,result,temp,sum=0;
	scanf("%d %d",&num1,&num2);
	for(int i=num1+1;i<num2;++i)
	{
temp=i;
sum=0;
	while(temp!=0)
	{
		result=temp%10;
		sum=sum+(result*result*result);
		temp=temp/10;
	}

	if(sum==i)
{
printf("%d",sum);
}
else
{
	
}
}
	
	return 0;
}
