#include<stdio.h>

main()
{
	FILE *f1, *f2, *f3;
	char ch;
	int upper_count =0,lower_count =0;
	
	f1=fopen("d:\\abc.txt","r");
	
	f2=fopen("d:\\sujal 1.txt","w");
	
	f3=fopen("d:\\sujal 2.txt","w");
	
	while(ch!=EOF)
	{
		ch=getc(f1);
				if(isupper(ch))
		{
		upper_count++;
		putc(ch,f2);
		}
			   else if(islower(ch))
		{
		lower_count++;
		putc(ch,f3);	
		}
} 
	fclose(f1);
	fclose(f2);
	fclose(f3);
	printf("\ncopied");
}
