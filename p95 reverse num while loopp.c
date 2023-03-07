#include<stdio.h>
main()
{
	int n , reversed = 0,remainder;
	printf("Enter int number =>");
	scanf("%d",&n);
	
	while(n!=0)
	{ 
	   remainder=n%10;
	                  reversed =  reversed * 10 + remainder;
	  
	    n/=10;
	}
             	printf("reversed numer =%d\n",reversed);
}
