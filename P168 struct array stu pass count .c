#include<stdio.h>

struct student
{
	int sid;
	char sname[20];
	int hindi,eng,total;
};

main()
{
	struct student s[100];
	int no,i,total;
	
	printf("\nEnter student limit =>");
	scanf("%d",&no);
	
	for(i=0;i<no;i++)

	{
		printf("\nEnter student id =>");
		scanf("%d",&s[i].sid);
		
		fflush(stdin);
		printf("\nEnter student name =>");
		gets(s[i].sname);
		
		printf("\n student hindi marks =>");
		scanf("%d",&s[i].hindi);
		
		printf("\n student english marks =>");
		scanf("%d",&s[i].eng);
	}
	printf("\nstudentid\tstudentname\thindi\teng\tpass");
	printf("\n=================================================");

	for(i=0;i<no;i++)
	{
		total=s[i].hindi+s[i].eng;
		if(total>50)
	{
	printf("\n%d      \t%s         \t%d    \t%d \tpass",s[i].sid,s[i].sname,s[i].hindi,s[i].eng,s[i].hindi+s[i].eng);
	}
}
	printf("\n=================================================");
}
