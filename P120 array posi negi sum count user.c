#include<stdio.h>
#define N 100
main()
{
	int a[N];
	int n,i,c=0,c1=0,s=0,s1=0;
	
	printf("\nEnter limit =>");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\nEnter value of a[%d]=>",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			printf("\n%d positive",a[i]);
			c+=1;
			s+=a[i];
		}
		else
		{
			printf("\n%d negative",a[i]);
			c1+=1;
			s1+=a[i];
		}
	}
	printf("\nTotal count positive = %d",c);
	printf("\ntotal count negative = %d",c1);
	printf("\ntotal sum positive= %d",s);
	printf("\ntotal sum negative= %d",s1);
}
