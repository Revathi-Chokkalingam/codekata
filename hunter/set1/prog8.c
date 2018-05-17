#include <stdio.h>

int main(void) {
	// your code goes here
	int n,i,a[100],j,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		for(k=j+1;k<n;k++)
		{
		if(a[i]+a[j]==a[k])
		{
			if((a[i]<a[j])&&(a[j]<a[k]))
			{
			printf("%d,%d,%d\n",a[i],a[j],a[k]);
			}
		}
	}
}
}
	return 0;
}
