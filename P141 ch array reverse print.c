#include<stdio.h>
main()
{
	char alphabet[26];
	int y,i;
	char ch;
	
	printf("\nEnter the name =>");
	gets(alphabet);
	
	y=strlen(alphabet);
	
	for(i=y-1;i>=0;i--)
	{
		ch=alphabet[i];
	 printf("%c",ch);
	}
}
