#include <stdio.h>

int main(void) {
	// your code goes here
	int N,a[100],i;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<N;i++)
	{
		printf("%d %d\n",a[i],i);
	}
	return 0;
}
