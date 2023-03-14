#include<stdio.h>
#include<conio.h>

main()
{
char name[100];
int i=0,up=0,low=0;

printf("\nEnter name =>");
gets(name);

 for(i=strlen(name)-1;i>=0;i--)
{
printf("%c",name[i]);
}
}
