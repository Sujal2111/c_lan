#include<stdio.h>
#define N 2
main()
{
	int a[N][N];
	int i,j,transpose;
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("\nEnter the row =>");
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
	
	printf("\n New digonal matrix=>\n");
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
	if(i == j)
    {
		printf(" %d ",a[i][j]);
	}
     else
     {
	printf(" * ");
}
}
printf("\n");
}
}


