#include<stdio.h>
main()
{
	int no1,no2;
	char opt;
	do
	{
	printf("\nEnter a for add");
	printf("\nEnter b for sub");
	printf("\nEnter c for mul");
	printf("\nEnter d for div");
	printf("\nEnter e for exit :");
	printf("\nEnter option =>");
	fflush(stdin);
	scanf("%c",&opt);
	
	if(opt=='a'|| opt=='A')
	{
		printf("\nEnter the no1 =>");
		scanf("%d",&no1);
		printf("\nEnter the no2 =>");
		scanf("%d",&no2);
		printf("\nadd=%d",no1+no2);
	}
	
	else if(opt=='b' || opt=='B')
	{
		printf("\nEnter the no1 =>");
		scanf("%d",&no1);
		printf("\nEnter the no2 =>");
		scanf("%d",&no2);
		printf("\nsub=%d",no1-no2);
	}
	
	else if(opt=='c' || opt=='C')
	{
		printf("\nEnter the no1 =>");
		scanf("%d",&no1);
		printf("\nEnter the no2 =>");
		scanf("%d",&no2);
		printf("\nmul=%d",no1*no2);
	}
	else if(opt=='d' || opt=='D')
	{
		printf("\nEnter the no1 =>");
		scanf("%d",&no1);
		printf("\nEnter the no2 =>");
		scanf("%d",&no2);
		printf("\ndiv=%d",no1/no2);
	}
	else if(opt=='e' || opt=='E')
	{
		printf("\n Bye");
	}
}
	while(opt!='e' || 'E');
}


