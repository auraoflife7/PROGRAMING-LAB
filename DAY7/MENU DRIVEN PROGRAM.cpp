#include <stdio.h>

int main() {
    int num, choice;
    printf("Menu:\n");
    printf("1. Check for Buzz number\n");
    printf("2. Check for Even or Odd\n");
    printf("3. Check for Positive or Negative\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);
    printf("Enter a number: ");
    scanf("%d", &num);
    switch (choice) {
        case 1:
            if (num % 7 == 0 || num % 10 == 7) {
                printf("%d is a Buzz number.\n", num);
            } else {
                printf("%d is not a Buzz number.\n", num);
            }
            break;
        case 2:
            if (num % 2 == 0) {
                printf("%d is an even number.\n", num);
            } else {
                printf("%d is an odd number.\n", num);
            }
            break;
        case 3:
            if (num > 0) {
                printf("%d is a positive number.\n", num);
            } else if (num < 0) {
                printf("%d is a negative number.\n", num);
            } else {
                printf("The number is zero.\n");
            }
            break;
        default:
            printf("Invalid choice. Please run the program again and select from 1, 2, or 3.\n");
    }

    return 0;
}