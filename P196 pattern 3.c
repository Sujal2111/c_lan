#include<stdio.h>
main()
{
	int i,n;
	int j;
	
	printf("\nEnter the value of star=>");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=4;j++)
		{
			printf(" * ");
		}
		printf("\n");
	}
}
