#include<stdio.h>
#define N 2
main()
{
	int a[N][N];
	int i,j;
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("\nEnter Number 1=>");
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<N;i++)
	{
    	for(j=0;j<N;j++)
	{
	   printf(" %d ",a[i][j]);	
	}
	   printf("\n");
	}
	
	printf("\n NEW MATRIX SQUARE =>\n");
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf(" %d ",a[i][j]*a[i][j]);
		}
		printf("\n");
	}
}
