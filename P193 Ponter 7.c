#include<stdio.h>
void swap(int *a, int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
}

main()
{
    int x,y;

    x=5;
    y=8;
    swap(&x,&y);
    printf("\n%d x",x);
    printf("\n%d y",y);
}
