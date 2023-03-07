#include<stdio.h>
main()
{
	int i,n,s=1;
	printf("\nEnter the limit =>");
	scanf("%d",&n);
	
	for(i=n;i>=1;i--)
	
	{
		printf(" %d x",i);
		s*=i;
	}
	printf("\nsum = %d",s);
}
