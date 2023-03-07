#include<stdio.h>
main()
{
	float h,b,r;
	char opt;
	
	printf("\nEnter a for area of tringle");
	printf("\nEnter b for area of circle");
	printf("\nEnter option =>");
	scanf("%c",&opt);
	
	if(opt=='a' || 'A')
	{
		printf("\nEnter the h =>");
		scanf("%f",&h);
		printf("\nEnter the b =>");
		scanf("%f",&b);
		printf("\narea of tringle =%.2f",h*b*0.5);
	}
	else if(opt=='b' || 'B')
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
