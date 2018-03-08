#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes here
int n,i,fact=1;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	fact=fact*i;
}
printf("%d",fact);
	return 0;
}
