#include<stdio.h>

struct movie
{
	int mid;
	char mname[20];
	int year;
};

main()
{
	struct movie m[100];
	int no,i;
	
	printf("\nEnter limit =>");
	scanf("%d",&no);
	
	for(i=0;i<no;i++)
	{
		printf("\nEnter movie id =>");
		scanf("%d",&m[i].mid);
		
		fflush(stdin);
		printf("\nEnter movie name =>");
		gets(m[i].mname);
		
		printf("\nEnter movie release year =>");
		scanf("%d",&m[i].year);
	}
	
	printf("\nMovieid\tmoviename\tyear");
	printf("\n==================================");
	for(i=0;i<no;i++)
	{
		printf("\n%d\t%s\t %d",m[i].mid,m[i].mname,m[i].year);
	}
	printf("\n==================================");
}
	
