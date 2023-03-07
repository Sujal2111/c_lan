#include<stdio.h>
main()
{
	int no;
	
	printf("\nEnter the no=>");
	scanf("%d",&no);
	
	switch(no>0)
	{
	case 1:
	{
		printf("\n is posoitive");
		break;	
	}
	default:
	{
		printf("\n is nagative");
		break;
	}
	
}
}
