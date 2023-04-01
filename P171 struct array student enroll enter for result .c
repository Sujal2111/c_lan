#include<stdio.h>

struct student
{
	int sid;
	char sname[20];
	int hindi,eng;
};
main()
{
	struct student s[100];
	int no,i,total,y=0,c=0;
	
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
	printf("\nEnter student id no for result =>");
	scanf("%d",&y);
	c=0;

    	printf("\nstudentid\tstudentname\thindi\teng\ttotal");
	    printf("\n=================================================");
	
	for(i=0;i<no;i++)
	{
		total=s[i].hindi+s[i].eng;
		if(y==s[i].sid)
		{
		if(total>50)
		{
		printf("\n%d       \t%s         \t%d   \t%d \t%d\tpass",s[i].sid,s[i].sname,s[i].hindi,s[i].eng,s[i].hindi+s[i].eng);
		
		}
		else
		{
		printf("\n%d       \t%s         \t%d    \t%d  \t%d\tfail",s[i].sid,s[i].sname,s[i].hindi,s[i].eng,s[i].hindi+s[i].eng);	
		}
		c=1;
	}
   }
   if(c==0)
   {
   	printf("\nSorry not found");
   }
    printf("\n=================================================");  
}

