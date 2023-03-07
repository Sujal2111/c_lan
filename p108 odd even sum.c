#include<stdio.h>
main()
{
	int a[7]={11,2,33,4,53,2,7};
	int c=0,c1=0,s=0,s1=0,i,n=7;
	
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			printf("\n%d no is even",a[i]);
			c+=1;
			s+=a[i];
		
		}
		else
		{
			printf("\n%d no is odd",a[i]);
			c1+=1;
			s1+=a[i];
		}
	}
	printf("\nTotal count even = %d",c);
	printf("\ntotal count odd = %d",c1);
	printf("\ntotal sum even= %d",s);
	printf("\ntotal sum odd= %d",s1);
	
}
