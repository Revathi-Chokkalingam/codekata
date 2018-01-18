#include<stdio.h>
#include<string.h>
int main(void)
{
char ch[100];
gets(ch);
int k,i,count=0;
for(k=0;ch[k]!='\0';++k)
{}
for(i=0;i<k;i++)
{
if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U')
count++;
}
if(count!=0)
printf("yes");
else
printf("no");
return 0;
}
