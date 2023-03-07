#include<stdio.h>
#define N 100
main()
{
	int a[N];
	int n,i;
	int max;
	
	
	printf("\nEnter limit =>");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\nEnter value of a[%d]=>",i+1);
		scanf("%d",&a[i]);
	}
	 max =a[i];
	for(i=0;i<n;i++)
{
 if(a[i]>max)
 {
 	max=a[i];
 }
}
printf("\nMax number = %d",max);
}
