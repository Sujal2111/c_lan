#include<stdio.h>
main()
{
int i,n;
int number;

printf("\nEnter the number =>");
scanf("%d",&number);

i=1;
do
{
	if(i%2==0)
	{
		printf("\n%d is even number",i);
		i++;
	}
	else
	{
		printf("\n%d is odd number",i);
		i++;
	}
}
while(i<number);
	
}
