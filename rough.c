#include<stdio.h>
int main()
{
    int *ptr ;
    int a = 5 ;

    ptr = &a;
    *ptr = 34;

    *ptr = *ptr + 6 ;
    (*ptr)++;
    printf("%d", *ptr); 
    return 0;
}