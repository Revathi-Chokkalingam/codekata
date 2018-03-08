#include<stdio.h>
int main(void)
{
int A,B,C;
scanf("%d %d %d",&A,&B,&C);
int a,d,n;
a=A;
d=B;
n=C;
int ap=0;
int i;
for(i=0;i<n;i++)
{
	ap=ap+(a+(i*d));
}
printf("%d",ap);
return 0;
}
