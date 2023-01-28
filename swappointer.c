#include<stdio.h>
int main(){
    int a = 12 ,b = 13 ;
    int *ptr1;
    int *ptr2;

    ptr1 = &a;
    ptr2 = &b;
    
    *ptr1 = *ptr1 + *ptr2 ;
    *ptr2 = *ptr1 - *ptr2 ;
    *ptr1 = *ptr1 - *ptr2 ;
     
     printf("%d,%d",*ptr1,*ptr2);
     return 0;
}