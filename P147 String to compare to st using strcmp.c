#include<stdio.h>
#include<conio.h>
#include<string.h>

main()
{
	char str1[20],str2[10];
	int i;
	
	printf("Enter first string:");
	scanf("%s",&str1);
	
	printf("Enter second string:");
	scanf("%s",&str1);
	i = strcmp(str1,str2);
	
	if(i==0)
	{
		printf("\nboth strings are equal %d",i);
	}
	else
	{
		printf("\nboth strings are not equal %d",i);
	}

}

