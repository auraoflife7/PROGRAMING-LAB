#include <stdio.h>
#include <math.h>
int main() 
{
	float a, b, c, x1, x2;
	printf("Enter the following details\n");
	printf("a=");
	scanf("%f",&a);
	printf("b=");
	scanf("%f",&b);
	printf("c=");
	scanf("%f",&c);
	x1 = (-b + sqrt(b*b - 4*a*c)) / (2*a);
    x2 = (-b - sqrt(b*b - 4*a*c)) / (2*a);
    printf("First root=%f",x1);
    printf("Second root=%f",x2);
    return 0;

}
