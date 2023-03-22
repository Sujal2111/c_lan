#include<stdio.h>
main()
{
	char alphabet[26];
	int y,i,upper_count =0,lower_count =0;
	char ch;
	
	printf("\nEnter the name =>");
	gets(alphabet);
	
	y=strlen(alphabet);
	
	for(i=0;i<y;i++)
	{
		ch=alphabet[i];
		
		if(isupper(ch))
		{
			upper_count++;
		}
		if(islower(ch))
		{
			lower_count++;
		}
	}
	printf("\nTotal upper are %d",upper_count);
	printf("\nTotal lower are %d",lower_count);
}
