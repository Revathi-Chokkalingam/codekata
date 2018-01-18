#include<stdio.h>
int main(void)
{
int N,L,R;
scanf("%d",&N);
scanf("%d %d",&L,&R);
if((N>L)&&(N<R))
printf("yes");
else
printf("no");
return 0;
}
