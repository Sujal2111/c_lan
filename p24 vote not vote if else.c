#include<stdio.h>
main()
{
	int age,vote,number;
	
	printf("\nenter your age -=>");
	scanf("%d",&age);
	
	if(age>18)
	{
		printf("\nu can vote");
	}
	else
	{
		printf("\nu cant vote");
	}
}
