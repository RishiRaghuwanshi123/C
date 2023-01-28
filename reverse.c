#include<stdio.h>
int main()
{
    int a, b,c = 0;
    printf("write number:");
    scanf("%d",&a);
    if(a>=0){
        for ( a ; a>0 ; a = a/10 )
    {   
        b = a%10;
        c = c*10+b;
        
    } 
    printf("%d",c);
    } else {
        while(a<0)
{
    b= a%10;
    c = c*10+b;
    a= a/10;
}
   printf("%d",c);
    }
    
    return 0;
}

