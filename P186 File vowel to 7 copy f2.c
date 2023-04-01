#include<stdio.h>

main()
{
	FILE *f1, *f2;
	char ch;
	
	f1=fopen("d:\\abc.txt","r");
	
	f2=fopen("d:\\sujal.txt","w");
	
	while(ch!=EOF)
	{
		ch=getc(f1);

		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
		{
			putc('7',f2);
		}
		else
		{
			putc(ch,f2);
		}
	}
	fclose(f1);
	fclose(f2);
	printf("\ncopy done");
}
