#include<stdio.h>

void printTable(int a);

int main()
{
    int a;
    printf("enter number hows table you want:");
    scanf("%d",&a);

    printTable(a);
    return 0;
}

void printTable(int a){
    for(int i=1; i<=10 ; i++){
        printf("%d\n",a*i);
    }
}