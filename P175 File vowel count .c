/*
1)vowel!
2)upp? lower?
3)upp-->lower ,lower -->lower
4)space x
5)upper x
6)vowel 7

*/

#include<stdio.h>

main()
{
	FILE *f1;
	char ch;
	int c=0;
	
	f1=fopen("d:\\abc.txt","r");
	
	while(ch!=EOF)
	{
		ch=getc(f1);

		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
		{
			c++;
		}
	}
	fclose(f1);
	printf("\nVowel count =>%d",c);
}
