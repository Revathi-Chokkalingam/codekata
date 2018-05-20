
#include <stdio.h>

int main(void) {
	int n,i,a[100],freq[100],q,temp,count=0,b[100],j,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(q=0;q<9;q++)
	{
		freq[q]=0;
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>=0&&a[i]<=9999)
		{
			freq[a[i]]++;
		}
	}
	for(q=0;q<9;q++)
	{
		if(freq[q]>1)
		{
			 b[count]=q;
count++;
		}

	}

for(j=0;j<count;j++)
{for(k=j+1;k<count;k++)
{
if(b[j]>b[k])
{
temp=b[j];
b[j]=(b[k]);
(b[k])=temp;
}

}
}
for(j=0;j<count;j++)
{
printf("%d",b[j]);
}
	return 0;
}
