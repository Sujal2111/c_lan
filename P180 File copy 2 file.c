#include<stdio.h>

main()
{
	FILE *f1, *f2;
	char ch;
	int c=0;
	
	f1=fopen("d:\\abc.txt","r");
	
	f2=fopen("d:\\sujal.txt","w");
	
	while(ch!=EOF)
	{
		ch=getc(f1);
	    putc(ch,f2);
	}
	fclose(f1);
	fclose(f2);
	printf("\nCopy Done");
}
