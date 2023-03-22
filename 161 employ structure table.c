#include<stdio.h>

struct employ
{
	int empid;
	char ename[20];
	int salary;
};

main()
{
	struct employ e1,e2,e3;
	
	printf("\nEnter employ id =>");
	scanf("%d",&e1.empid);
	
	fflush(stdin);
	printf("\nEnter employ name =>");
	gets(e1.ename);
	
	printf("\nEnter employ salary=>");
	scanf("%d",&e1.salary);
	
	
	printf("\nEnter employ id =>");
	scanf("%d",&e2.empid);
	
	fflush(stdin);
	printf("\nEnter employ name =>");
	gets(e2.ename);
	
	printf("\nEnter emloye salary =>");
	scanf("%d",&e2.salary);
	
	
	printf("\nEnter employ id =>");
	scanf("%d",&e3.empid);
	
	fflush(stdin);
	printf("\nEnter employ name =>");
	gets(e3.ename);
	
	printf("\nEnter employ salary =>");
	scanf("%d",&e3.salary);
	
	printf("\ne1's mid = %d mname = %s releaseyear =%d",e1.empid,e1.ename,e1.salary);
	printf("\ne2's mid = %d mname = %s releaseyear =%d",e2.empid,e2.ename,e2.salary);
	printf("\ne3's mid = %d mname = %s releaseyear =%d",e3.empid,e3.ename,e3.salary);
}
