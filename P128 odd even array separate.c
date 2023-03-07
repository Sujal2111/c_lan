#include<stdio.h>
#define N 100
main()
{
	int n,i,p=0,s=0;
	int a[N],b[N],c[N];
	
		
	printf("\nEnter limit a=>");
	scanf("%d",&n);
	
		for(i=0;i<n;i++)
	{
		printf("\nEnter value of a[%d]=>",i+1);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	if(a[i]%2==0)
	{
    c[p]=a[i]; 
	p++;	        
	}
	else
	{
    b[s]=a[i];
	s++;	     
	}

    printf("\neven number are =>");
    for(i=0;i<p;i++)
	{
        printf("%d ", c[i]);
    }

    printf("\nodd number are =>");
    for(i=0;i<s;i++)
	{
        printf("%d ", b[i]);
    }
}
