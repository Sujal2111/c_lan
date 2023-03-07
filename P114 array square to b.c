#include<stdio.h>
main()
{
	int i,n=7;
	int a[7]={12,14,56,7,65,48,39};
	int b[7]={};
	
	for(i=0;i<n;i++)
	{
		b[i]=a[i]*a[i];
	 } 
	 printf("\n after");
	 for(i=0;i<n;i++)
	 {
	 	printf("\n%d----%d",a[i],b[i]);
	 }
}
