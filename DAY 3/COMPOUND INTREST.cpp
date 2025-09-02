#include <stdio.h>
#include<math.h> 
int main() 
{
    float p, r, t, a, ci, n;
    printf("Enter the principal amount: ");
    scanf("%f", &p);
    printf("Enter the annual interest rate (in percentage): ");
    scanf("%f", &r);
    printf("Enter the time (in years): ");
    scanf("%f", &t);
    r = r / 100;
    a = p * pow((1 + r), t);
    ci = a - p;
    printf("Compound Interest is : %f",ci);
    return 0;
}