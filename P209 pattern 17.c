#include<stdio.h>
main()
{
	int i,n;
	int k,j;
	
	printf("\n Enter the value of pattern =>");
	scanf("%d",&n);
	

	for(i=1;i<=n;i++)
	{
		k=1;
		for(j=n;j>=i;j--)
		{
	     	if(j%2==0)
			{
				printf(" 0 ");
			}
			else
			{
				printf(" 1 ");
			}
		}
		printf("\n");
	}
}
