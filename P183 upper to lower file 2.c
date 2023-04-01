#include<stdio.h>

main()
{
	FILE *f1, *f2;
	char ch;
	int upper_count =0,lower_count =0;
	
	f1=fopen("d:\\abc.txt","r");
	f2=fopen("d:\\sujal.txt","w");
	
	while(ch!=EOF)
	{
		ch=getc(f1);
		
		if(isupper(ch))
		{
			printf("%c",tolower(ch));
			putc(ch,f2);
		}
		else if(islower(ch))
		{
		printf("%c",toupper(ch));
		putc(ch,f2);	
		}
} 
	fclose(f1);
	fclose(f2);
	printf("\n copy done");
}
