#include<stdio.h>
main()
{
		int i,n,s=0;
		{
			printf("\nEnter the limit =>");
			scanf("%d",&n);
		}
		
	for(i=1;i<=n;i++)
		
       if(i%2!=0)
    	{
	    	printf("- %d",i);
		    s-=i;
	    }
	   else
	    {
	    	printf("+ %d",i);
	    	s+=i;
     	}
	printf("\nsum = %d",s);
	  
}
