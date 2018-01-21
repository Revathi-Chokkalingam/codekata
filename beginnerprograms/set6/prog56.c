#include <stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    gets(ch);
    int k,i,temp=0,temp1=0,temp2=0;
    k=strlen(ch);
    for(i=0;i<k;i++)
    {
    	if(ch[i]>='a'&&ch[i]<='z')
    	temp++;
    	else if(ch[i]>='A'||ch[i]<='Z')
    	temp1++;
    	if(ch[i]>='0'||ch[i]<='9')
    	temp2++;
    }
    if(temp!=0&&temp1!=0&&temp2!=0)
    printf("yes");
    else
    printf("no");
    return 0;
}
