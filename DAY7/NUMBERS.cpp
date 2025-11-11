#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("Enter three numbers (e.g., 56 -15 12): ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 == num2 && num2 == num3) {
        printf("The numbers are equal.\n");
    } else {
        if (num1 >= num2 && num1 >= num3) {
            printf("The greatest number is %d\n", num1);
        } else if (num2 >= num1 && num2 >= num3) {
            printf("The greatest number is %d\n", num2);
        } else {
            printf("The greatest number is %d\n", num3);
        }
    }
    if (num1 >= 0 && num2 >= 0 && num3 >= 0) {
        printf("Entered numbers are 'All positive'.\n");
    } else if (num1 < 0 && num2 < 0 && num3 < 0) {
        printf("Entered numbers are 'All negative'.\n");
    } else {
        printf("Entered numbers are 'Mixed numbers'.\n");
    }

    return 0;
}