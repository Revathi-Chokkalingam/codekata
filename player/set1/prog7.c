#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes here
	char s1[10000000],temp;
	gets(s1);
	long int k=strlen(s1);
	long int i;
	for(i=0;i<k;i++)
	{
		temp=s1[i];
		s1[i]=s1[i+1];
		s1[i+1]=temp;
		i++;
	}
	for(i=0;i<k;i++)
	{
		printf("%c",s1[i]);
	}
	return 0;
}
