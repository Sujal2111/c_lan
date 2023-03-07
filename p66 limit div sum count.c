#include<stdio.h>
main()
{
	int no,no1;
	int i,s=0,c=0;
	printf("\n Enter the limit no =>");
	scanf("%d",&no);
	
	printf("\n Enter the div no1 =>");
	scanf("%d",&no1);
	
	for(i=0;i<=no;i++)
	{
	
	   if(i%no1==0)
        {
	    	printf("\n%d it is devided",i);
	    	c+=1;
	    	s+=i;
        }
    
}
   	printf("\n Total devided number:%d",c);
	printf("\n Total devided sum:%d",s);
	
	
    
}
