#include <stdio.h>

int main(void) {
	// your code goes here
	int n,i,a[100],j=0,count=0,b[100],k,temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==i)
		{
		b[j]=a[i];
		j++;
		count++;
		}
		
	}
	if(count==0)
	{printf("-1");
	}
	else
	{
	for(j=0;j<count;j++)
{
	printf("%d",b[j]);
}
}
	

	return 0;
}
