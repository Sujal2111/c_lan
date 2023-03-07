#include<stdio.h>
main()
{
	int i,no;
	printf("\n Enter the limit =>");
	scanf("%d",&no);
	
	i=1;
	while(i<=no)
	{
		printf("\n%d---%d",i,i*i);
		i++;
	}
	
}
