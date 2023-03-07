#include<stdio.h>
main()
{
	int i,n,s=0;
	printf("\nEnter the limit =>");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf(" 1/%d +",i);
		s+=i;
	}
	printf("\nsum = %d",s);
}
