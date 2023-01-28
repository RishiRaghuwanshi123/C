#include<stdio.h>
int main()
{
    int a,b;
    int *ptr1,*ptr2;
    ptr1 = &a;
    ptr2 = &b;
    printf("Enter numbers :");
    scanf("%d %d",&*ptr1,&*ptr2);
    int add = *ptr1 + *ptr2;
    printf("%d\n",add);
    return 0;
}