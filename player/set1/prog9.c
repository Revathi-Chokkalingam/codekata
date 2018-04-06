#include <stdio.h>

int main(void) {
	// your code goes here
	long int l,r,i,j,temp=0;
	scanf("%d %d",&l,&r);
	for(j=l+1;j<r;j++)
	{
		temp=0;
		for(i=2;i<j/2;i++)
		{
			if((j%i)==0)
			{
				temp=1;
				break;
			}
		}
		if(temp==0)
		{
			printf("%d\n",j);
		}
	}
	return 0;
}
