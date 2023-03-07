#include<stdio.h>
main()
{
	int no;
	shahpur:
	printf("\nEnter the number =>");
	scanf("%d",&no);
	
  if(no>0)
  {
  	printf("\nsquare=%d",no*no);
  }
  else
  {
  	printf("\nwhy enter negative");
 goto shahpur; 
  }
}
