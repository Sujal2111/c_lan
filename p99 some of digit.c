#include<stdio.h>
main()
{
	int n,y,i,sum=0,remainder;
	
	printf("Enter an integer :=>");
	scanf("%d",&n);
	y=n;
	
	
	
	while(n!=0)
	
	{ 
	remainder =n%10;
	sum = sum + remainder;
	n/=10;
}
printf("\nsum = %d",sum);
}

