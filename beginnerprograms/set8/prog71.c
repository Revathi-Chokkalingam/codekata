#include<stdio.h>
#include<string.h>
int main(void)
{
char ch[100],b[100];
gets(ch);
strcpy(b,ch);
strrev(b);
if(strcmp(a,b)==0)
printf("yes");
else
printf("no");
return 0;
}
