#include<stdio.h>
main()
{
	int y,i;
	char name[200];
	char ch;
	
	printf("Enter name =>");
	gets(name);
	
	y = strlen(name);
	
	for(i=0;i<y;i++)
	{
		ch = name[i];
		printf("\n %c",ch);
	}
}
