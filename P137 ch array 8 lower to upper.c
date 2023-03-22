#include<stdio.h>
main()
{
	char alphabet[26];
	int y,i;
	char ch;
	
	printf("\nEnter the name =>");
	gets(alphabet);
	
	y=strlen(alphabet);
	
	for(i=0;i<y;i++)
	{
		ch=alphabet[i];
		
		if(isupper(ch))
		{
			printf("\n%c",tolower(ch));
		}
		else if(islower(ch))
		{
		printf("%c",toupper(ch));	
		}
else
{	
	printf("%c",alphabet);
}
}
}

