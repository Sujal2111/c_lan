#include<stdio.h>
main()
{
	int no;
	char opt;
	
	printf("\nEnter 1 for square =>");
	printf("\nEnter 2 for square =>");
	printf("\nEnter option =>");
	scanf("%d",&opt);
	
	switch(opt)
	{
	case 1:
	{
		printf("\nEnter the no=>");
		scanf("%d",&no);
		printf("\nsquare=%d",no*no);
		break;
	}
	case 2:
     {
     	printf("\nEnter the no=>");
		scanf("%d",&no);
		printf("\ncube=%d",no*no*no);
		break;
	 }
	default:
	{
	printf("\nWrong opt");
    }
    
}
}
/* 1 2 3 4 area of tri
  area of circle
  max2 
  positive nagative

  + - * /
  s c
 t c m p  */
