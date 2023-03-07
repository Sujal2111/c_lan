#include<stdio.h>
main()
{
	int no;
	char opt;
	do
	{
	printf("\nEnter s for square =>");
	printf("\nEnter c for square =>");
	printf("\nEnter e for exit :");
	printf("\nEnter option =>");
	fflush(stdin);
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
	else if(opt=='e' || opt=='E')
	{
		printf("\n Bye");
	}
	
}
while(opt!='e' || 'E');
}
