#include<stdio.h>
main()
{
	int a[7]={11,25,-33,-40,53,2,-70};
	int c=0,c1=0,s=0,s1=0,i,n=7;
	
	for(i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			printf("\n%d positive",a[i]);
			c+=1;
			s+=a[i];
		
		}
		else
		{
			printf("\n%d negative",a[i]);
			c1+=1;
			s1+=a[i];
		}
	}
	printf("\nTotal count positive = %d",c);
	printf("\ntotal count negative = %d",c1);
	printf("\ntotal sum positive= %d",s);
	printf("\ntotal sum negative= %d",s1);
	
}
