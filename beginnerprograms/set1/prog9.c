#include <stdio.h>

int main(void) {
int n,v=0,sum=0;
scanf("%d",&n);
for(int j=0;j<=n;j++)
{
sum=sum+v;
v++;
}
printf("%d",sum);
return 0;
}
