#include<stdio.h>
main()
{
	int i,n;
	int j;
	
	printf("\n Enter the pattern value =>");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" + ");
		}
		printf("\n");
	}
}
