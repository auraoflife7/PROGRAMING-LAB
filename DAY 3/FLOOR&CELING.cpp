#include <stdio.h>
#include <math.h>
int main() {
    double num1,num2;
    printf("Enter number positive number");
    scanf("%f",&num1);
    printf("Floor: %f\n", floor(num1));
    printf("Ceiling: %f\n", ceil(num1));
    printf("Enter number negtive number");
    scanf("%f",&num2);
    printf("Floor: %f\n", floor(num2));
    printf("Ceiling: %f\n", ceil(num2));
    return 0;
}