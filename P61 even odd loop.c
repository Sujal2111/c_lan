#include<stdio.h>
main()
{
	int i;
	int number;
	
	printf("\n Enter the number");
	scanf("%d",&number);
	
	for(i=1;i<=number;i++)
	{
		if(i%2==0)
		{
			printf("\n%d is even number",i);
		}
		else
		{
			printf("\n%d is odd number",i);
		}
	}
}
