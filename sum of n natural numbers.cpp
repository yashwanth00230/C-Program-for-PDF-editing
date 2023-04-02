#include<stdio.h>
int main()
{
	int i,sum=0,n;
	printf("enter a value: ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	    {
	    	printf("\n%d",i);
	    	sum=sum+i;
		}
    	printf("\nsum of n natuaral numbers = %d",sum);
	    return 0;
}

