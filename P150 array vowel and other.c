#include<stdio.h>
main()
{
	char name[100];
	char v[100],o[100];
	char ch;
	int i,y,k=0,m=0;
	
	printf("enter the name=>");
	gets(name);
	
	y=strlen(name);
	
	for(i=0;i<y;i++)
	{
	ch=name[i];
		
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
	v[k]=ch;
	k++;
	}
	else 
	{
	o[m]=ch;
	m++;	
	}
}

printf("\nvowles = %s",v);
printf("\nOther = %s",o);

}


