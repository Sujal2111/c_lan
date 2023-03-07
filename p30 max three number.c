#include<stdio.h>
main()
{
	int a,b,c;
	
	printf("\nEnter the a number =>");
	scanf("%d",& a);
	
	printf("\nEnter the b number =>");
	scanf("%d",& b);
	
	printf("\nEnter the c number =>");
	scanf("%d",& c);
	
	if(a>b && b>c)
	{
		printf("\nA is bigger");
	}
	else if(b>a && b>c)
	{
		printf("\nB is bigger");
	}
	else 
	{
		printf("\nC is bigger");
	}
}
