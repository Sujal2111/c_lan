#include<stdio.h>
main()
{
	int i,n;
	int j;
	
	printf("\nEnter the value of star =>");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
{
	for(j=1;j<=n;j++)
	{
		printf(" %d ",i);
	}
	printf("\n");
}
}
