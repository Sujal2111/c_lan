#include<stdio.h>
main()
{
	char alphabet[200];
	int y,i;
	char ch;
	
	printf("\nEnter the name =>");
	gets(alphabet);
	
	y=strlen(alphabet);
	
	for(i=0;i<y;i++)
	{
		ch=alphabet[i];
		
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
		
	}
		else
		{
			printf(" %c",ch);
		}
	}
}
