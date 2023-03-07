#include<stdio.h>
main()
{
	int a[10]={1,55,9,18,27,34,89,36,78};
	int i,n=10;
	
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			printf("\n%d no is even",a[i]);
		}
		else
		{
			printf("\n%d no is odd",a[i]);
		}
	}
}
