#include<stdio.h>
main()
{
	int i;
	int no;
	
	printf("\nEnter limit =>");
	scanf("%d",&no);
	
	for(i=1;i<=no;i++)
	{
		printf("\n%d ======%d",i,i*i);
	}
}
