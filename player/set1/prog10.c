#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes here
	char a[100],b[100];
	int n;
	gets(a);
	gets(b);
	n=strcmp(a,b);
	if(n==1)
	{
		printf("yes");
		
	}
	else
	{
		printf("no");
	}
	return 0;
}

