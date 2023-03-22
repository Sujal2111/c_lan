#include<stdio.h>
void add()
{
	int no1,no2;
	
	printf("\nADDITION \n Enter the no1-->");
	scanf("%d",&no1);
	
	printf("\n Enter the no2-->");
	scanf("%d",&no2);
	
	printf("\n add=%d",no1+no2);
	printf("\n");
}

void sub()
{
	int no1,no2;
	
	printf("\nSUB \n Enter the no1-->");
	scanf("%d",&no1);
	
	printf("\n Enter the no2-->");
	scanf("%d",&no2);
	
	printf("\n sub=%d",no1-no2);
	printf("\n");
}
void mul()
{
	int no1,no2;
	
	printf("\nMULTIPLICATION \n Enter the no1-->");
	scanf("%d",&no1);
	
	printf("\n Enter the no2-->");
	scanf("%d",&no2);
	
	printf("\n add=%d",no1*no2);
	printf("\n");
}

void div()
{
	int no1,no2;
	
	printf("\nDIVISION \n Enter the no1-->");
	scanf("%d",&no1);
	
	printf("\n Enter the no2-->");
	scanf("%d",&no2);
	
	printf("\n add=%d",no1/no2);
	printf("\n");
}

main()
{
	add();
	sub();
	mul();
	div();
}
