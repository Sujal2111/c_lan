#include<stdio.h>
main()
{
int i,n,s=1;

printf("\nEnter the number =>");
scanf("%d",&n);

     i=n;
     do
      {
    	printf("%d x",i);
    	s*=i;
        i--;
      }
      
     while(i>=1);
      printf("\nsum = %d",s);
}

