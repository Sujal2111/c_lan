#include<stdio.h>

main()
{
	FILE *f1;
	char ch;
	int upper_count =0,lower_count =0;
	
	f1=fopen("d:\\abc.txt","r");
	
	while(ch!=EOF)
	{
		ch=getc(f1);
		
		if(isupper(ch))
		{
			upper_count++;
		}
		else
		{
		printf("%c",ch);
		}
	}
	fclose(f1);
}
