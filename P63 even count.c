#include<stdio.h>
main()
{   char number;
	int i, s=0;
	
	printf("\nEnter the number =>");
	scanf("%d",&number);
	
	for(i=1;i<=number;i++)
	{
		if(i%2==0)
		{
			printf("%d",i);
			s+=1;
		}		
	}
	printf("\n Total even number:%d",s);
}
