#include<stdio.h>
main()
{
	int number;
	
	printf("enter number =>");
	scanf("%d",&number);
	
	if(number%2==0)
	{
		printf("\nthe number is even");
	}
	else
	{
		printf("\nthe number is odd");
	}
}
