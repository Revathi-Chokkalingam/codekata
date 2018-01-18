#include<stdio.h>
int main(void)
{
int a,b;
int diff;
scanf("%d %d",&a,&b);
diff=a-b;
if(diff%2==0)
printf("even");
else
printf("odd");
return 0;
}
