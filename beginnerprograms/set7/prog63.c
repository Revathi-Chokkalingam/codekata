#include<stdio.h>
#include<string.h>
int main(void)
{
char ch[100];
gets(ch);
int k,i,count=1;
for(k=0;ch[k]!='\0';++k)
{
}
for(i=0;i<k;i++)
{
if(ch[i]==' ')
count++;
}
printf("%d",count);
return 0;
}
