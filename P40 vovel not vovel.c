#include<stdio.h>
main()
{
	char ch;
	
	
	printf("Enter the ch => ");
	scanf("%c",&ch);
	
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u' ||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
		printf("\nit is vowel");
	}
	 else
	{
	 	printf("\n it is other alphabet ");
	}
}
