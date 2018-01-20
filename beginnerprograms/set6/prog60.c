#include <stdio.h>

int main(void) {
int n;
scanf("%d",&n);
int next,first=0,second=1,i;

for(i=0;i<n;i++)
{
	if(n==1)
{
next=n;

}
else
{
	first=second;
second=next;
next=first+second;


}
printf("%d ",next);
}


	return 0;
}
