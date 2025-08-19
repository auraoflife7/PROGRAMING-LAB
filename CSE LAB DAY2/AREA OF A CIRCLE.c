#include <stdio.h>
#define pi 3.142 
int main()
{
    float r, area;
 
    printf("Enter the Radius of a circle \n");
    scanf("%f", &r);
    area = pi*r*r;
    printf("Area of a circle = %f\n", area);
}