#include<stdio.h>
main()
{
	char alphabet[200];
	int y,i,c=0,c1=0;
	char ch;
	
	printf("\nEnter the name =>");
	gets(alphabet);
	
	y=strlen(alphabet);
	
	for(i=0;i<y;i++)
	{
		ch=alphabet[i];
		
		if(isupper(alphabet))
		{
			c++;
		}
		else if(islower(alphabet))
		{
			c1++;
		}
	}
	printf("\nTotal upper are %d",c);
	printf("\nTotal lower are %d",c1);
}
