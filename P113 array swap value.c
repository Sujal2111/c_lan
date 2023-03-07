#include<stdio.h>
main()
{
	int i,n=7;
	int a[7]={15,30,45,57,78,89,90};
	int b[]={};
	
	for(i=0;i<n;i++)
	{
		b[i]=a[i];
	}
	printf("\n value of b is ");
	for(i=0;i<n;i++)
	{
		printf("\n %d",b[i]);
	}
}
