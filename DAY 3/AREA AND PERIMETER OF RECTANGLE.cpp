#include <stdio.h>

int main() {
    float l, b;
    float a, p;
    printf("Enter the length of the rectangle: ");
    scanf("%f", &l);
    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &b);
    a = l * b;
    p = 2 * (l + b);
    printf("Area of the rectangle: %.2f\n", a);
    printf("Perimeter of the rectangle: %.2f\n", p);
    return 0;
}