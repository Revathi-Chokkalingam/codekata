#include <stdio.h>

int main(void) {
	// your code goes here
	long int n,i,a[100],q,freq[100];
	scanf("%ld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%ld",&a[i]);
	}
for(q=0;q<=100;q++)
{
	freq[q]=0;
}
for(i=0;i<n;i++)
{
	if(a[i]>=0&&a[i]<=100)
	freq[a[i]]++;
}
for(q=0;q<=100;q++)
{
	if(freq[q]==1)
	{
		printf("%ld",q);
	}
}
	return 0;
}

