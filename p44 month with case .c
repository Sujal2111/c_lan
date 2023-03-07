#include<stdio.h>
main()
{
	int monthno;
	
	printf("\nEnter monthno =>");
	scanf("%d",&monthno);
	
	switch(monthno)
	{
	case 1:
	{
		printf("\njanuary");
		break;
	}
	case 2:
	{
		printf("\nfebruary");
		break;
	}
	case 3:
	{
		printf("\nmarch");
		break;
	}
	case 4:
	{
		printf("\napril");
		break;
	}
	case 5:
	{
		printf("\nmay");
		break;
	}
	case 6:
	{
		printf("\njun");
		break;
	}
	case 7:
	{
		printf("\njuly");
		break;
	}
	case 8:
	{
		printf("\naugest");
		break;
	}
	case 9:
	{
		printf("\nseptember");
		break;
	}
	case 10:
	{
		printf("\noctomber");
		break;
    }
	case 11:
	{
		printf("\nnovember");
		break;
	}
	case 12:
	{
		printf("\ndecember");
		break;
	}
	default:
    {
		printf("\nSorry other monthno");
	}
}
}
