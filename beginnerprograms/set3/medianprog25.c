#include <stdio.h>

int main(void) {

	int n,a[100],i,temp,j,count1=0,p,f;
	scanf("%d",&n);
	if(n%2==0)
	count1++;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		if(a[i]>a[j])
		{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		}
		}
	}
	if(count1==0)
	{
		for(i=0;i<n;i++)
		{
	p=(((n+1)/2)-1);
		}
		
			printf("%d",a[p]);
	}
	else
	{
		for(i=0;i<n;i++)
		{
				p=(((n+1)/2)-1);
				f=((n+1)/2);
		}
		printf("%.2f",(a[p]+a[f])/2.0);
	}
	
			
	return 0;
}
