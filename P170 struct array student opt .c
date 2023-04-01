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
	int opt;
	
	printf("\nEnter the number 1 for pass");
	printf("\nEnter the number 2 for fail");
	printf("\nEnter the number 3 for pass/fail both");
	printf("\nEnter the option =>");
	scanf("%d",&opt);
	
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
	
	if(opt==1)
	  {
	      printf("\nstudentid\tstudentname\thindi\teng\tpass");
	   printf("\n=================================================");

	for(i=0;i<no;i++)
	  {
	     total=s[i].hindi+s[i].eng;
	     if(total>50)	
     	  {
     	   printf("\n%d       \t%s         \t%d   \t%d \tpass",s[i].sid,s[i].sname,s[i].hindi,s[i].eng,s[i].hindi+s[i].eng);
    	  }
      }
        printf("\n=================================================");
    
}	 
    else if(opt==2)
    {
    printf("\nstudentid\tstudentname\thindi\teng\tTotal\tfail");
	printf("\n=================================================");
    
    for(i=0;i<no;i++)
	{
       total=s[i].hindi+s[i].eng;
	   if(total<50)	
	   {
	printf("\n%d       \t%s         \t%d   \t%d  \ttotal \tfail",s[i].sid,s[i].sname,s[i].hindi,s[i].eng,s[i].hindi+s[i].eng);
       }
	}
	printf("\n=================================================");
}
  else if(opt==3)
    {
  	printf("\nstudentid\tstudentname\thindi\teng\tpass\tfail");
	printf("\n=================================================");
	
	for(i=0;i<no;i++)
	{
	 total=s[i].hindi+s[i].eng;
	 if(total>50)
	 {
	 printf("\n%d      \t%s         \t%d   \t%d \tpass",s[i].sid,s[i].sname,s[i].hindi,s[i].eng,s[i].hindi+s[i].eng);	
	 }
	 else
	 {
	 printf("\n%d      \t%s         \t%d    \t%d \tfail",s[i].sid,s[i].sname,s[i].hindi,s[i].eng,s[i].hindi+s[i].eng);	
	 }
}
}
	else
	{
		printf("\nWrong opt");
	}
}
