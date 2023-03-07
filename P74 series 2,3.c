#include<stdio.h>
main()
{
	int i,n,s=0;
	{
		printf("\nEnter the limit =>");
		scanf("%d",&n);
	}
	for(i=1;i<=n;i++)
	
	if(i%2==0)
	{
		printf("\n %d +",i*i);
		s+=i*i;	
	}
	else
	{
    	printf("\n %d +",i*i*i);
    	s+=i*i*i;
    	
    }
    printf("\nsum = %d",s);
}
