#include <stdio.h>
#include<string.h>
int main(void) {
char a[100];
	int k,i;
gets(a);
k=strlen(a);
for(i=(k-1);i>=0;i--)
{
printf("%c",a[i]);	
}

	return 0;
}
