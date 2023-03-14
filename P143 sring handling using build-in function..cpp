#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char str1[10],str2[10];
	clrscr();
	
	printf("\n Enter str1:");
	scanf("%s",&str1);
     
    printf("\n Enter str2:");
	scanf("%s",&str2);
	
	printf("\n Before coping:");
	printf("\nstr1:%s\t str2:%s",str1,str2);
	
	strcpy(str2,str1);
	
	printf("\nAfter coping:");
	printf("\nstr1:%s \t str2:%s",str1,str2);
	getch();

}





















