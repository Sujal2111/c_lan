#include<stdio.h>
main()
{
	int a[7]={1,2,3,4,5,6,7};
	int c=0,c1=0,s=0,i,n=7;
	
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			printf("\n%d no is even",a[i]);
			c+=1;
			s+=1;
		}
		else
		{
			printf("\n%d no is odd",a[i]);
			c1+=1;
			s+=1;
		}
	}
	printf("\nTotal count even = %d",c);
	printf("\ntotal odd = %d",c1);
	printf("\nTotal sum = %d",s);
	
}
