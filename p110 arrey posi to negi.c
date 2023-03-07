#include<stdio.h>
main()
{
	int a[8]={11,-12,13,-14,15,-16,17,-18};
	int i,n=8;
	
	for(i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
	}
	printf("\nAfter");
	for(i=0;i<n;i++)
	{
	printf(" %d ",a[i]*-1);	
	}
}
