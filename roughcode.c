#include<stdio.h>
int main()
{
    int a;
    printf("Enter year :");
    scanf("%d",&a);

    if(a%400==0){
        printf("entered year is leap year");
    } else if(a%4==0 && a%100==0) {
        printf("entered year is not leap year");
    } else if(a%4==0){
        printf("entered year is leap year");
    } else {
        printf("entered year is leap year");
    }
    return 0;
}

