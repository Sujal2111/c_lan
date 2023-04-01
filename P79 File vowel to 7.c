#include<stdio.h>

main()
{
	FILE *f1;
	char ch;
	
	f1=fopen("d:\\abc.txt","r");
	
	while(ch!=EOF)
	{
		ch=getc(f1);

		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
		{
			printf("7");
		}
		else
		{
			printf("%c",ch);
		}
	}
	fclose(f1);
}
