#include<stdio.h>
main()
{
	int i,n,s=0;
	{
		printf("\nEnter the limit =>");
		scanf("%d",&n);
	}
	for(i=1;i<=n;i++)
	{
		printf("\n %d +",i*i);
		s+=i*i;	
	}
	printf("\nsum = %d",s);
}
