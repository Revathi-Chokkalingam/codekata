#include <stdio.h>

int main(void) {
	
	int num,reverse=0,temp;
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
		reverse=reverse*10;
		reverse=reverse+(num%10);
		num=num/10;
	}

	if(reverse==temp)
	printf("yes");
	else
	printf("no");
	return 0;
}
