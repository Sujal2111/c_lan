#include<stdio.h>
main()
{
int i,n,s=1;

printf("\nEnter the number =>");
scanf("%d",&n);

     i=1;
     while(i<=n)
      {
    	printf("%d x",i);
    	s*=i;
    	 i++;
      }
      

      printf("\nsum = %d",s);
}



