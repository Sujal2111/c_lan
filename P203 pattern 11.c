#include<stdio.h>
main()
{
	int i,n;
	int j,k;
	
	printf("\nEnter the value =>");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		k=n;
		for(j=1;j<=i;j++)
		{
			printf(" %d ",k);
			k--;
		}
	printf("\n");
	}
}
