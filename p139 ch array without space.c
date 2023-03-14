#include<stdio.h>
main()
{
	char name[200];
	int y,i;
	char ch;
	
	printf("\nEnter the name =>");
	gets(name);
	
	y=strlen(name);
	
	for(i=0;i<y;i++)
	{
		ch=name[i];
		
	    if(ch==' ')
		{
			
		}
		else
		{
			printf("%c",ch);
		}
}
}

