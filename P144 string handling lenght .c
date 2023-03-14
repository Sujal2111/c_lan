#include<stdio.h>
#include<conio.h>
#include<string.h>

main()
{
	char str1[30];
	
	int l,k;
	
	printf("\nEnter string:");
	gets(str1);
	
	l=strlen(str1);
	
	printf("\nThe lenght of the string is %d \n",l);
	
	for(k=0;k<l-1;k++)
	{
		printf("%c",str1[k]);
	}
	
}













