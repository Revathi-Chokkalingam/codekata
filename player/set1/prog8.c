#include <stdio.h>
#include<string.h>
int main(void)
{
	char ch[100];
	int i,k,m,n,p;
	gets(ch);
	k=strlen(ch);
	for(i=0;i<k;i++)
	{
	p=(int*)ch[i];
		if(p>=97&&p<=122)
	{
		ch[i]=ch[i];
	}
	else if(p>=65&&p<=90)
	{
		ch[i]=ch[i]+32;
	}
	m=(int*)ch[0];
	if(m>=97&&m<=122)
	{
		ch[0]=ch[0]-32;
	}
	else if(m>=65&&m<=90)
	{
		ch[0]=ch[0];
	}
	if(ch[i]=='a')
	{
		n=(int*)ch[i+1];
	if(n>=97&&n<=122)
	{
		ch[i+1]=ch[i+1]-32;
	}
	else if(n>=65&&n<=90)
	{
		ch[i+1]=ch[i+1];
	}	
	}
printf("%c",ch[i]);
}
	return 0;
}
