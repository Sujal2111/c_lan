#include<stdio.h>
main()
{
	int i,n;
	int k,j;
	
	printf("\n Enter the value of pattern =>");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		k=n;
		for(j=n;j>=i;j--)
		{
			printf(" %d ",k);
			k--;
		}
		printf("\n");
	}
}
