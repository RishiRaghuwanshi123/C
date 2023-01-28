#include<stdio.h>
 
void printgreating();
void bonjor();
int main()
{
    char a;
    printf("press i if Indian and f if french");
    scanf("%c",&a);

    if(a == 'i') {
        printgreating();
    } else {
        bonjor();
    }
   return 0;
}

void printgreating() {
    printf("namaste\n");
}

void bonjor(){
    printf("bonjor\n");
}