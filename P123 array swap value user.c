#include<stdio.h>
#define N 100
main()
{
	int a[N];
	int b[]={};
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
		b[i]=a[i];
	}
	printf("\n value of b is ");
	for(i=0;i<n;i++)
	{
		printf("\n %d",b[i]);
	}
}
