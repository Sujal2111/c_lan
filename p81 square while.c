#include<stdio.h>
main()
{
	int i,n;
	int no;
	
	printf("\n Enter the number =>>");
	scanf("%d",&no);
	
	i=1;
	while(i<no)
	{
    if(i%2==0)
    {
    	printf("\n%d",i);
	}
	i++;
}
}
