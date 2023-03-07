#include<stdio.h>
#define N 100
main()
{
	int a[N];
	int n,i,c=0;
	int y;
	
	
	printf("\nEnter limit =>");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\nEnter value of a[%d]=>",i+1);
		scanf("%d",&a[i]);
	}
	
	printf("\nenter value of search=");
	scanf("%d",&y);
	
	for(i=0;i<n;i++)
	{
	if(a[i]==y)
	{
		c++;
	}
}
		if(c==0)
		{
			printf("\n Value is not found");
		}
	else
	{
	printf("\nCount = %d",c);	
	}
}


