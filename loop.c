#include<stdio.h>
int main()
{
    int a;
    printf("enter a number:");
    scanf("%d", &a);

  //  for ( int i = 0; i <= a; i++){
       // printf("%d\n",i);
   // }
   int i = 0 ;
   while(i<=a){
    printf("%d\n",i);
    i++;
   }
    return 0;
}