#include <stdio.h>

int main(void) {
	// your code goes here
	int n,a[100],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i+1]-a[i]!=1)
		{
			a[i+1]=a[i]+1;
		}
		printf("%d ",a[i]);
	}
	
	return 0;
}
