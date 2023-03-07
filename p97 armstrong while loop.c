#include<stdio.h>
main()
{
	int n,y,sum,reversed = 0,remainder;
	printf("\nEnter an integer :=>");
	scanf("%d",&n);
	y=n;
	while(n!=0)
	{ 
	   remainder=n%10;
	   sum= sum +  (remainder*remainder*remainder);
	   n/=10;
	}
             	printf("reversed numer =%d\n",reversed);
             	printf("\nno = %d",y);
    if(sum==y)
  {
	printf("\n it is armstrong number");
 }
 else
 {
 	printf("\n it is not armstrong number" );
 }   	
}

