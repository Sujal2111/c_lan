#include<stdio.h>
main()
{
	char alphabet;
	
	printf("Enter the alphabet =>");
	scanf("%c",&alphabet);
	
	if(isupper(alphabet))
	{
		printf("\n it is upper");
	}
	else if(islower(alphabet))
	{
		printf("\n it is lower");
	}
	else
	{
		printf("\n other");
	}
}
