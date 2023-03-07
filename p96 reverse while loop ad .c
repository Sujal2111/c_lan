#include<stdio.h>
main()
{
	int n ,y, reversed = 0,remainder;
	printf("Enter int number =>");
	scanf("%d",&n);
	y=n;
	while(n!=0)
	{ 
	   remainder=n%10;
	                  reversed =  reversed * 10 + remainder;
	  
	    n/=10;
	}
             	printf("reversed numer =%d\n",reversed);
             	printf("\nno = %d",y);
          if(y==reversed)
  {
	printf("\n it is palidrom number");
 }
 else
 {
 	printf("\n it is not palidrom number" );
 }   	
}

