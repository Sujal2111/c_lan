#include<stdio.h>
#include<conio.h>
#include<string.h>

main()
{
	char str[20];
	
	printf("\nLowered string is: %s",str);
	gets(str);
	
	strlwr(str);
	printf("Lowered string is: %s",str);
	getch();
}
