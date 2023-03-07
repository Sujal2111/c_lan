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
	
	switch(a>b && a>c)
	{
	case 1:	
	{
		printf("\nA is bigger");
	}
	case 2:(b>c && b>c);
	{
		printf("\nB is bigger");
	}
	default:
	{
	printf("\nC is bigger");
	}
}
}
