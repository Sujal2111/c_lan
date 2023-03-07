#include<stdio.h>
main()
{
	int no;
	char opt;
	
	printf("\nEnter s for square =>");
	printf("\nEnter c for square =>");
	printf("\nEnter option =>");
	scanf("%c",&opt);
	
	if(opt=='s' || opt=='S')
	{
		printf("\nEnter the no=>");
		scanf("%d",&no);
		printf("\nsquare=%d",no*no);
	}
	else if(opt=='c' || opt=='C')
     {
     	printf("\nEnter the no=>");
		scanf("%d",&no);
		printf("\ncube=%d",no*no*no);
	 }
	else
	{
	printf("\nWrong opt");
    }
 
}
