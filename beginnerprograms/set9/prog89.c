#include<stdio.h>
#include<string.h>
int main(void)

{
char ch[100];
char temp;
gets(ch);
int i,k,j;
k=strlen(ch);
for(i=0;i<k;i++)
{
for(j=i+1;j<k;j++)
{
	
            if(ch[i]>ch[j])
            {
                temp=ch[i];
                ch[i]=ch[j];
                ch[j]=temp;
}

}
}
printf("%s",ch);
	return 0;
}
