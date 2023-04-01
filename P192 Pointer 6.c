#include<stdio.h>

main()
{
    int i;
    int a[5]={11,12,18,10,8};
    int *ptr;
    ptr=a;

    for(i=0;i<5;i++)
    {
        printf("\n %d",*ptr);
        ptr++;
    }
}
