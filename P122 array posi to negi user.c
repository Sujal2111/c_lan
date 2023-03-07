#include<stdio.h>
#define N 100
main()
{
	int a[N],b[N];
	int n,i;
	
	printf("\nEnter limit =>");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\nEnter value of a[%d]=>",i+1);
		scanf("%d",&a[i]);
	}
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
