#include<stdio.h>
main()
{
	char name1[200];
	char name2[200];
	int y1,y2,n;
	char ch;
	
	
	printf("\nenter name y1=>");
	gets(name1);
	
	printf("\nenter name y2=>");
	gets(name2);
	
	y1=strlen(name1);
	y2=strlen(name2);
	
	printf("\nLength=%d",y1);
	printf("\nLength=%d",y2);
	

	if(y1>y2)
	{
	printf("\ny1 is greter");
	}
	else if(y1<y2)
	{
	printf("\ny2 is greter");
	}
    else 
    {
    printf("\n both no is equal");
	}
}


