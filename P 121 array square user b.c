#include<stdio.h>
#define N 100
main()
{
	int a[N],b[N];
	int n,i,c=0,c1=0,s=0,s1=0;
	
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
	 } 
	 printf("\n after");
	 for(i=0;i<n;i++)
	 {
	 	printf("\n%d----%d",a[i],b[i]);
	 }
}
