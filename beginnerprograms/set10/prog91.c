#include<stdio.h>
#include<string.h>
int main(void)

{
int L,B,H,vol,surarea;
scanf("%d %d %d",&L,&B,&H);
surarea=((2*L*B)+(2*B*H)+(2*H*L));
vol=L*B*H;
printf("%d %d",surarea,vol);
	return 0;
}
