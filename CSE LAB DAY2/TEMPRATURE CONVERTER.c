#include <stdio.h>
int main()
{
    float temp, fa, ce;
    int cho;
    printf("1. Convert Celsius to Fahrenheit\n");
    printf("2. Convert Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &cho);
    if (cho == 1) 
    {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temp);
        fa = (temp * 9 / 5) + 32;
        printf("%f Celsius is equal to %f Fahrenheit.\n", temp, fa);
    }
     else if (cho == 2) 
     {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temp);
        ce = (temp - 32) * 5 / 9;
        printf("%.2f Fahrenheit is equal to %f Celsius.\n", temp, ce);
     }
       else {
              printf("Invalid choice. Please enter 1 or 2\n");
            }
    return 0;
}