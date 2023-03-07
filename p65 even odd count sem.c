#include<stdio.h>
main()
{
	char no;
	int i,c=0,s=0,c1=0,s1=0;
	
	printf("\n Enter the no =>");
	scanf("%d",&no);
	
	for(i=1;i<no;i++)
	{
		if(i%2==0)
		{
			printf("\n%d No is even",i);
			c+=1;
			s+=i;
		}
		else
	    {
			printf("\n%d No is odd",i);
			c1+=1;
			s1+=i;
		}
	}
	printf("\n Total even number:%d",c);
	printf("\n Total odd number:%d",c1);
	printf("\n sum of even number:%d",s);
	printf("\n sum of odd number:%d",s1);
	
}
