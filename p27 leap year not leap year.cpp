#include<stdio.h>
main()
{
	int year;
	
	printf("\nenter the year =>");
	scanf("%d",&year);
	
	if(year%4==0)
	{
		printf("\nleap year");
	}
	else
	{
		printf("\nnot leap year");
	}
}
