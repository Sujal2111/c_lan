#include<stdio.h>
void add()
{
	int no1,no2;
	
	printf("\nADDITION \n Enter the no1-->");
	scanf("%d",&no1);
	
	printf("\n Enter the no2-->");
	scanf("%d",&no2);
	
	printf("\n add=%d",no1+no2);
	printf("\n");
}

void oddeven()
{
	int no;
	printf("\n Enter for ODD EVEN==>");
	scanf("%d",&no);
	
	if(no%2==0)
	{
		printf("\n it is even number");
	}
	else
	{
		printf("\n it is odd number");
	}
	printf("\n");
}

   void max2()
{
  int no1,no2;
  
  printf("\n enter MAX no1 ==>");
  scanf("%d",&no1);
  printf("\n enter MAX no2-->");
  scanf("%d",&no2);
  
  if(no1>no2)
  {
  	printf("\n no1 is grater");
  }
  else
  {
  	printf("\n no2 is grater");
  }
  printf("\n");
}

 void areaoftringle()
{
  float b,h;
  
  printf("\n enter the BASH-->");
  scanf("%f",&b);
  printf("\n enter the HEIGHT-->");
  scanf("%f",&h);
  
   printf("\narea of tringle=%.2f",h*b*0.5);
   printf("\n");
}
   
  void areaofcircle()
{
  float r;
  
  printf("\n enter the AREA-->");
  scanf("%f",&r);
  
  printf("\nArea of circle=%.2f",r*r*3.14);
   printf("\n");
}

  void max3()
{
  int no1,no2,no3;
  
  printf("\nMAX BETWEEN \n enter the no1-->");
  scanf("%d",&no1);
  printf("\n enter the no2-->");
  scanf("%d",&no2);
  printf("\n enter the no3-->");
  scanf("%d",&no3);
  
  if(no1>no2)
  {
  	printf("\n no1 is grater");
  }
  else if(no2>no3)
  {
  	printf("\n no2 is grater");
  }
  else
  {
  	printf("\n no3 is grater");
  }
  printf("\n");
}

void table()
 {
    int no;
 	int i;
 	
 	printf("\nEnter the TABLE number=>");
 	scanf("%d",&no);
 	
 	for(i=1;i<=10;i++)
 	{
 		printf("\n%d X %d = %d",no,i,no*i);
	 }
	 printf("\n");
 }
 
 void factorial()
 {
	int i,n,s=1;
	
	printf("\nFACTORIAL \nEnter limit =>");
	scanf("%d",&n);
	
	for(i=n;i>=1;i--)
	{
		printf("%d x ",i);
		s*=i;
	}
	printf("\n Sum = %d",s);
	printf("\n");
}

 void squre()
   {
	int no;
	printf("\nSQUARE \nEnter no =>");
	scanf("%d",&no);
	{
		printf("%d",no*no);
	}
	printf("\n");
}

void cube()
   {
	int no;
	printf("\nCUBE \nEnter no =>");
	scanf("%d",&no);
	{
		printf("%d",no*no*no);
	}
	printf("\n");
}

	main()
{
	add();
	oddeven();
	max2();
	areaoftringle();
	areaofcircle();
	max3();
    table();
    factorial();
    squre();
    cube();
}
