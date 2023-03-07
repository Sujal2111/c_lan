#include<stdio.h>
#define N 100
main()
{
	int a[N];
	int b[N]={};
	int c[N]={};
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
		b[i]=a[i]*a[i];
		c[i]=a[i]*a[i]*a[i];
	}
	printf("\n After");
	for(i=0;i<n;i++)
	{
		printf("\n%d----%d----%d",a[i],b[i],c[i]);
	}
}
