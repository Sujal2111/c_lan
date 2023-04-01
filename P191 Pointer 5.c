#include<stdio.h>

main()
{
    int a=20,b=2;
    int *ptra,*ptrb;
    ptra=&a;
    ptrb=&b;

    printf("\n add=%d",*ptra + *ptrb);
    printf("\n sub=%d",*ptra - *ptrb);
    printf("\n mul=%d",*ptra * *ptrb);
    printf("\n div=%d",*ptra / *ptrb);
    
}
