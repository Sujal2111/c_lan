#include<stdio.h>
main()
{
	float h,b,r;
	int opt;
	
	printf("\nEnter 1 for area of tringle");
	printf("\nEnter 2 for area of circle");
	printf("\nEnter option =>");
	scanf("%d",&opt);
	
	if(opt==1)
	{
		printf("\nEnter the h =>");
		scanf("%f",&h);
		printf("\nEnter the b =>");
		scanf("%f",&b);
		printf("\narea of tringle =%.2f",h*b*0.5);
	}
	else if(opt==2)
	{
		printf("\nEnter the value =>");
		scanf("%f",&r);
		printf("\narea of circle =%.2f",r*r*3.14);	
	}
	else 
	{
		printf("\nWrong opt");
	}
}
