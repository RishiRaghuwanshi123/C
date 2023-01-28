#include<stdio.h>
int main()
{
    float a;
    printf("Enter a number:");
    scanf("%f",&a);
    float volume = a*a*a;
    printf("volume of cube:%f",volume);
    return 0;
}