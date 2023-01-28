#include<stdio.h>
int main()
{
    char day;  //m-monday,n-tuesday,_ _ _ _
    printf("enter m to s");
    scanf("%c",&day);

    switch(day) {
        case 'm': printf("monday");
        break;
         case 'n': printf("tuesday");
        break;
         case 'o': printf("wenesday");
        break;
         case 'p': printf("thrusday");
        break;
         case 'q': printf("friday");
        break;
         case 'r': printf("saturday");
        break;
         case 's': printf("sunday");
        break;
        default : printf("not a valid day");
    }
    return 0;
}