#include<stdio.h>

void calculatevalue(float a);

int main()
{
    float a;
    printf("Enter your value:");
    scanf("%f",&a);

    calculatevalue(a);
    printf("%f",a);
    return 0;

}

void calculatevalue(float a){
    a = a + (a*0.18);
    printf("%f\n",a);
}