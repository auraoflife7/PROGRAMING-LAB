#include<stdio.h>
int main()
{
    float p, r, t, si;
    printf("Enter the Principal Amount :");
    scanf("%f",&p);
    printf("Enter the Interest Rate :");
    scanf("%f",&r);
    printf("Enter the Time(Year) :");
    scanf("%f",&t);
    si=(p*r*t)/100;
    printf("Simple Interest = %f\n", si);
    return 0;
}