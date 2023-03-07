#include<stdio.h>
main()
{
	float h,b,r;
	char opt;
	
	printf("\nEnter 1 for area of tringle");
	printf("\nEnter 2 for area of circle");
	printf("\nEnter 3 for max between two");
	printf("\nEnter 4 for positive or negitive");
	printf("\nEnter option =>");
	scanf("%d",&opt);
	
	switch(opt)
	{
	case 1:
	{
		printf("\nEnter the h =>");
		scanf("%f",&h);
		printf("\nEnter the b =>");
		scanf("%f",&b);
		printf("\narea of tringle =%.2f",h*b*0.5);
		break;
	}
	case 2:
	{
		printf("\nEnter the value =>");
		scanf("%f",&r);
		printf("\narea of circle =%.2f",r*r*3.14);
		break;	
	}
	case 3:
		{
		    int no1,no2;

			printf("\nEnter the no1 =>");
			scanf("%d",&no1);
			
			printf("\nEnter the no2 =>");
			scanf("%d",&no2);
			
			if(no1>no2)
			{
				printf("\nno1 is bigger");
			}
			else
			{
			printf("\nno2 is bigger");	
			}
		}
	case 4:
		{
			int no;
			
        printf("\nEnter the no=>");
        scanf("%d",&no);
        
        if(no>0)
        {
        printf("\n is posoitive");
		break;
		}
		else 
       {
		printf("\n is nagative");
		break;
		}
		
	}
	default:
	{
		printf("\nWrong opt");
	}
}
}
