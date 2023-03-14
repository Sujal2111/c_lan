#include<stdio.h>
main()
{
	char name[200];
	int y;
	
	printf("Enter name =>");
	gets(name);
	
	y = strlen(name);
	
	printf("\nLength = %d",y);
}
