#include<stdio.h>
main()
{
	int i,n;
	printf("\nEnter the limit =>");
	scanf("%d",&n);
	
	i=1;
	do
	{
		printf("\n%d",i);
		i++;
	}
	while(i<=n);
}
