#include<stdio.h>
#include<string.h>
int main(void)
{
char ch[100];
scanf("%s",ch);
int k,i,count=0;
for(k=0;ch[k]!='\0';++k)
{
}
for(i=0;i<k;i++)
{
if(ch[i]=='0'||ch[i]=='1')
count++
}
if(count!=0)
printf("yes");
else
printf("no");
return 0;
}
