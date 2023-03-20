#include<stdio.h>
#define N 3
main()
{
	int a[N][N];
	int i,j;
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("\nEnter Number =>");
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<N;i++)
	{
    	for(j=0;j<N;j++)
	{
	   printf("%d ",a[i][j]);	
	}
	   printf("\n");	
	}
}
