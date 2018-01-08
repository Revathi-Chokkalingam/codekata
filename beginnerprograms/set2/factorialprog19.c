#include <stdio.h>

int main(void) {
int fact,result=1,i;
scanf("%d",&fact);
for(i=1;i<=fact;i++)
{
	result=result*i;
}
	printf("%d",result);
	return 0;
}
