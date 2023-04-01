/*. Define a structure containing details of a Hotel like hotel name, address, number of rooms 
charges. Create an array of 10 Hotels and get their details from the user. If the room charges 
entered by the user is equal to the room charges of a Hotel then display all the details of that 
Hotel.*/

#include<stdio.h>

struct hotal
{
	
	char hname[20];
	char hadd[20];
	int hprice;
};

main()
{
	struct hotal h[100];
	int no,i,y=0,c=0;
	int hprice;
	
	printf("\nEnter THE LIMIT =>");
	scanf("%d",&no);
	
	for(i=0;i<no;i++)
	{
		fflush(stdin);
		printf("\nEnter HOTAL NAME =>");
		gets(h[i].hname);
		
		fflush(stdin);
		printf("\nEnter the address =>");
		gets(h[i].hadd);
		
		fflush(stdin);
		printf("\nEnter the HOTAL PRICE =>");
		scanf("%d",&h[i].hprice);
	}	
	
	printf("\nEnter your budget=>");
	scanf("%d",&y);
	c=0;
	
	printf("\nhotalname\thotaladdress\thotalprice");
	printf("\n=================================================");
	
	
	for(i=0;i<no;i++)
	{
		if(h[i].hprice<y)
		{
	printf("\n%s       \t%s          \t%d",h[i].hname,h[i].hadd,h[i].hprice);
		c=1;
	 }
	}
   if(c==0)
   {
   	printf("\nSorry not found");
   }
    printf("\n=================================================");  
}

