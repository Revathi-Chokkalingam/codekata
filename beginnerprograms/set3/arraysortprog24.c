#include <stdio.h>

int main(){
int N,a[1000];
int i,temp,j;
scanf("%d",&N);
for(i=0;i<N;i++)
{
	scanf("%d",&a[i]);
	temp=0;
}
for(i=0;i<N;i++)
{
	for(j=i+1;j<N;j++)
	{
	if(a[i]>a[j])
	{
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
}
		
	}
}
for(i=0;i<N;i++)
{
printf("%d",a[i]);
}
	return 0;
}
