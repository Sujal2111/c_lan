#include<stdio.h>
#include<conio.h>
#include<string.h>

main()
{
	char str[20];
	
	printf("Enter a string:");
	gets(str);
	
	strupr(str);
	printf("Uppered string is: %s",str);
	getch();
}
