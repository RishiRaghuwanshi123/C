#include<stdio.h>
int main()
{
  float a,b;
  printf("Enter the sides of rectangle");
  scanf("%f %f",&a,&b);
  float area = a*b;
  printf("Area of rectangle:%f",area);
 // float peremeter = 2*(a+b);
 // printf("perimeter of rectangle:%f",peremeter);
  return 0;
}