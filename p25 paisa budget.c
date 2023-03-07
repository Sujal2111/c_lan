#include<stdio.h>
main()
{
	int budget;
	
	printf("enter budget =>");
	scanf("%d",&budget);
	
	if(budget>200)
	{
		printf("\npizza");
	}
	else
	{
		printf("\npani puri");
	}
}
