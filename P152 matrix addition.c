#include<stdio.h>
#define N 2
main()
{
	int a[N][N];
	int b[N][N];
	int i,j;
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("\nEnter Number 1=>");
			scanf("%d",&a[i][j]);
		}
	}
	
	/*nu 2 add */
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("\nEnter Number 2=>");
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("\nValues of A\n");
	
	for(i=0;i<N;i++)
	{
    	for(j=0;j<N;j++)
	{
	   printf("%d ",a[i][j]);	
	}
	   printf("\n");	
	}
	
	
	printf("\nValues of B\n");
	
	for(i=0;i<N;i++)
	{
    	for(j=0;j<N;j++)
	{
	   printf("%d ",b[i][j]);	
	}
	   printf("\n");	
	}
	
	/*adition */
	
	printf("\n-=>New Matrix =>\n");
		for(i=0;i<N;i++)
	{
    	for(j=0;j<N;j++)
	{
	   printf("%d ",a[i][j]+b[i][j]);	
	}
	   printf("\n");	
	}
}
