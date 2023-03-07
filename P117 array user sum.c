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
	for(i=n-1;i>=0;i--)
	{
		printf("  %d",a[i]);
	}
	for(i=0;i<=n;i++)
	{
		printf("\n%d",a[i]+b[i]);
	}
}
