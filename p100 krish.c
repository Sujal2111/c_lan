#include<stdio.h>
main()
{
	int n,reversed=0,remainder,sum=0,y,f,i;
	
	printf("\nEnter an integer =>");
	scanf("%d",&n);
	y=n;
	
	while(n!=0)
	{ 
	   remainder=n%10;
	   f=1;
	   
	    for(i=1;i<=remainder;i++) 
	  	{
	  	f=f*i;
		}	
	
	sum=sum+f;
	n/=10;
   }
	printf("\n=%d",sum);
	if(sum==y)
	{
		printf("\nno is krishnamurtay");
	}
else
{
	printf("\nno is not krishnamurtay");
}
}

