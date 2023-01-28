#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);

    if(a > 0){
        printf("positive number");
        if(a%2==0){
            printf("even");
        } else {
            printf("odd");
        } 
    }
    else{
         printf("negative number");
    }
    return 0;
        }
      