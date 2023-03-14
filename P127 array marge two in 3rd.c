#include<stdio.h>
#define N 100
main()
{
	int a[N],b[N],c[N];
	int n1,n2,i,k=0;
	
	
	printf("\nEnter limit a=>");
	scanf("%d",&n1);
	
		for(i=0;i<n1;i++)
	{
		printf("\nEnter value of a[%d]=>",i+1);
		scanf("%d",&a[i]);
	}
	
	printf("\nEnter limit b=>");
	scanf("%d",&n2);
	
			for(i=0;i<n2;i++)
	{
		printf("\nEnter value of b[%d]=>",i+1);
		scanf("%d",&b[i]);
	}
	k=0;
	for(i=0;i<n1;i++)
	{
	  c[k]=a[i];
	  k++;
	}
	for(i=0;i<n2;i++)
	{
	c[k]=b[i];
	k++;
	}
	printf("\nMerge two array :");
	for(i=0;i<k;i++)
	{
		printf("%d,",c[i]);
	}
}

	
