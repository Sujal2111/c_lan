#include<stdio.h>
main()
{
	char no;
	int i, c=0 , s=0;
	
	printf("\n Enter the number =>");
	scanf("%d",&no);
	
	for(i=1;i<no;i++)
	{
		if(i%2==0)
		{
			printf("\n%d",i);
			c+=1;
			s+=i;
		}
	 }
	 printf("\n Total even number:%d",c);
	 printf("\n sum of even number:%d",s); 
} 
