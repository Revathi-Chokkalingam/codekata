#include <stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    gets(ch);
    int k,i;
    k=strlen(ch);
    for(i=0;i<k;i++)
    {
    printf("%c ",ch[i]);	
    }
    
    return 0;
}
