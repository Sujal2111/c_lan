#include<stdio.h>
main()
{
	int i,n;
	int no;
	printf("\nEnter the table no =>");
	scanf("%d",&no);
	
	i=1;
	while(i<=10)
	{
		printf("\n%d x %d = %d",no,i,no*i);
		i++;
	}
}
