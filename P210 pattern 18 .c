#include<stdio.h>
main()
{
	int i,n;
	int j;
	
	printf("\n Enter the value of pattern =>");
	scanf("%d",&n);
	

	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
		{
	     	if(i%2==0)
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
