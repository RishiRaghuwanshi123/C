#include<stdio.h>
int main(){
    int a;
    for(int i ; i ; i++){
        scanf("%d",&a);
        //if(a%2 != 0)
        if( a%7 == 0) {
            break;
        }
    }
    printf("stop you entered multiple of 7 number");
    return 0;
}