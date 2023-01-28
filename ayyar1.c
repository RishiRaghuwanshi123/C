#include<stdio.h>
int main()
{
    float cost[3];
    printf("Enter first price:");
    scanf("%f",&cost[0]);
    printf("Enter second price:");
    scanf("%f",&cost[1]);
    printf("Enter third price");
    scanf("%f",&cost[2]);

    printf("%f\n",cost[0]+(cost[0]*0.18));
    printf("%f\n",cost[1]+(cost[1]*0.18));
    printf("%f\n",cost[2]+(cost[2]*0.18));
    return 0;
}