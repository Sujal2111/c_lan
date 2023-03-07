#include<stdio.h>
main()
{
	int no;
	int i;
	
	printf("\nEnter the no =>");
	scanf("%d",&no);
	
	for(i=1;i<=no;i++)
	{
		printf("\n%d ===== %d ===== %d",i,i*i,i*i*i);
	}
}
