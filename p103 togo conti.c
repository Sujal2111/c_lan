#include<stdio.h>
main()
{
	int i,n;
	
	printf("\nEnter the limit =>");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(i==5 || i==7)
		{
			continue;
		}
		printf("\n%d",i);
	}
	
}
