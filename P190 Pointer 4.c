#include<stdio.h>

main()
{
    int a=20;
    int *b;
    
    b=&a;
    printf("\n a=%d  *b=%d",a,*b);

    *b=500;
    printf("\n a=%d *b=%d",a,*b);
    
    a=70;
    printf("\n a=%d *b=%d",a,*b);

    *b=200;
    printf("\n a=%d *b=%d",a,*b);
}
