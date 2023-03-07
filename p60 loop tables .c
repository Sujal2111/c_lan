#include<stdio.h>
main()
{
	int no;
	int i;
	
	printf("\n Enter the number of table =>");
	scanf("%d",&no);
	
	for(i=1;i<=10;i++)
	{
		printf("\n%d x %d = %d",no,i,no*i);
	}
	
}
