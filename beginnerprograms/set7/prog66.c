#include <stdio.h>
int main()
{
    int n,i,p=0;

    scanf("%d",&n);

    for(i=2; i<=n/2; ++i)
    {
       
        if(n%i==0)
        {
            p++;
            break;
        }
    }

    if (p==0)
        printf("yes");
    else
        printf("no");
    
    return 0;
}
