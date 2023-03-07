#include<stdio.h>
main()
{
	int monthno;
	
	printf("\nEnter monthno =>");
	scanf("%d",&monthno);
	
	if(monthno==1)
	{
		printf("\njanuary");
	}
	else if(monthno==2)
	{
		printf("\nfebruary");
	}
	else if(monthno==3)
	{
		printf("\nmarch");
	}
		else if(monthno==4)
	{
		printf("\napril");
	}
		else if(monthno==5)
	{
		printf("\nmay");
	}
		else if(monthno==6)
	{
		printf("\njun");
	}
		else if(monthno==7)
	{
		printf("\njuly");
	}
		else if(monthno==8)
	{
		printf("\naugest");
	}
		else if(monthno==9)
	{
		printf("\nseptember");
	}
		else if(monthno==10)
	{
		printf("\noctomber");
    }
		else if(monthno==11)
	{
		printf("\nnovember");
	}
		else if(monthno==12)
	{
		printf("\ndecember");
	}
	else
    {
		printf("\nSorry other monthno");
	}
}
