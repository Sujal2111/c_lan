#include<stdio.h>
main()
{
int i,n,s=1;

printf("\nEnter the number =>");
scanf("%d",&n);

     i=1;
     do
      {
    	printf("%d x",i);
    	s*=i;
    	 i++;
      }
      while(i<=n);

      printf("\nsum = %d",s);
}


