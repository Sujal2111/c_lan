#include<stdio.h>
#define N 100
main()
{
	int a[N];
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
		if(a[i]%2==0)
		{
			printf("\n%d no is even",a[i]);
		}
		else
		{
			printf("\n%d no is odd",a[i]);
		}
	}
	
}
