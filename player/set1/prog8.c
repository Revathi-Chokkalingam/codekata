#include <stdio.h>
#include<string.h>
int main(void)
{
	char ch[100];
	int i,k;
	gets(ch);
	k=strlen(ch);
	for(i=0;i<k;i++)
	{
		ch[0]=ch[0]-32;
	 if(ch[i]==' ')
	 {
	 	ch[i+1]-=32;
	 }
	 printf("%c",ch[i]);
	}


	return 0;
}
