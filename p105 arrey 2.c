#include<stdio.h>
main()
{
	int a[10]={10,20,30,22,11,45,67,87,89,1001};
	int i,n=10;
	
	for(i=0;i<n;i++)
	{
		if(a[i]%5==0)
		{
			printf("\n%d",a[i]);
		}
	}
}
