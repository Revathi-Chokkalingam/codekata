#include <stdio.h>
int main()
{
    int n1,n2,i,temp=0,j;

    scanf("%d %d",&n1,&n2);
for(j=n1+1;j<n2;++j)
{
	temp=0;
    for(i=2; i<=j/2; ++i)
    {
       
        if(j%i==0)
        {
            temp++;
            break;
        }
    }

    if (temp==0)
        printf("%d ",j);
    else
        {
        	
        }
}
    
    return 0;
}
