#include<stdio.h>

struct employ
{
	int eid;
	char ename[20];
	int salary;
};

main()
{
	struct employ e[100];
	int no,i;
	
	printf("\nEnter employ limit =>");
	scanf("%d",&no);
	
	for(i=0;i<no;i++)
	{
		printf("\nEnter employ id =>");
		scanf("%d",&e[i].eid);
		
		fflush(stdin);
		printf("\nEnter employ name =>");
		gets(e[i].ename);
		
		printf("\n enter employ salary =>");
		scanf("%d",&e[i].salary);
	}
	
	printf("\nemployid\temployname\tsalary");
	printf("\n==================================");
	for(i=0;i<no;i++)
	{
		printf("\n%d\t%s\t%d",e[i].eid,e[i].ename,e[i].salary);
	}
	printf("\n==================================");
}
