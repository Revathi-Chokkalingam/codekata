#include<stdio.h>

int main(void)

{
int x,y,gcd;
scanf("%d %d",&x,&y);
if(x==0)
{
	printf("%d",y);
	
}
else
{
	while(x!=0&&y!=0)
	{
		if(x>y)
		x=x-y;
		else
		y=y-x;
	}
	printf("%d",x);
}
	return 0;
}
