#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes here
	char a[100],b[100];
	gets(a);
	gets(b);
	int m,count=0;
	m=strlen(a);
	
	for(int i=0;i<m;i++)
	{
		
		if(a[i]!=b[i])
		{
			count++;
		}
		
	}
	
	if(count==1)
	{
	printf("yes");
	}
	else
	{
	printf("no");
	}
	return 0;
}
