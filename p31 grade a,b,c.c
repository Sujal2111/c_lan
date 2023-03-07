#include<stdio.h>
main()
{
	int english,hindi,ss,total; //total 0-50 c,50-100 b,100 a // 
	
	printf("\nEnter the marks of english =>");
	scanf("%d",&english);
	
	printf("\nEnter the marks of hindi =>");
	scanf("%d",&hindi);
	
	printf("\nEnter the marks of ss =>");
	scanf("%d",&ss);
	
	total=english+hindi+ss;
	
	printf("\ntotal =%d",total);
	
	if(total>0 && total<=50)
	{
		printf("\nGrade c");
	}
	else if(total>50 && total<=100)
	{
		printf("\nGrade b");
	}
	if (total>100)
	{
		printf("\nGrade a");
	}
}
