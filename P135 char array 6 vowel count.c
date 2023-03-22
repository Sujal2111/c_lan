#include<stdio.h>
main()
{
	char name[200];
	int y,i,c=0;
	char ch;
	
	printf("\nEnter the name =>");
	gets(name);
	
	y=strlen(name);
	
	for(i=0;i<y;i++)
	{
		ch=name[i];
		
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
		{
			c++;
		}
	}
	printf("\nTotal vowel are %d",c);
}
