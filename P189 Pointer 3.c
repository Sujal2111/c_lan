#include<stdio.h>
main()
{
    int a;
    int *b;

    a=20;
    b=&a;

    printf("\n a=%d &a=%d",a,&a);

    printf("\n a=%d b=%d b=%d",b,&b,*b);
}
