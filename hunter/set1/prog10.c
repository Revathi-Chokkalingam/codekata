#include <stdio.h>

int main(void) {
	// your code goes here
	int n,m,i,a[100],j,b[100],count=0;
	scanf("%d",&n);
	scanf("%d",&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

for(j=0;j<m;j++)
{
	scanf("%d",&b[j]);
}
for(j=0;j<m;j++)
{
	for(i=0;i<n;i++)
	{
		if(b[j]==a[i])
		{
		count++;	
		}
	}
}
if(count==m)
{
	printf("yes");
}
else
{
	printf("no");
}
	return 0;
}
