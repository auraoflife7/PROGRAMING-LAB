#include <stdio.h>
#include <math.h>
int main() {
    int choice, num;
    printf("Menu:\n");
    printf("1. Check Automorphic number\n");
    printf("2. Check Narcissistic number\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("Enter a number: ");
    scanf("%d", &num);
    if (choice == 1) {
        int square = num * num;
        int temp = num;
        int flag = 1;

        while (temp > 0) {
            if (temp % 10 != square % 10) {
                flag = 0;
                break;
            }
            temp /= 10;
            square /= 10;
        }
        if (flag == 1)
            printf("%d is an Automorphic number.\n", num);
        else
            printf("%d is not an Automorphic number.\n", num);
    }
    else if (choice == 2) {
        int temp = num, digits = 0, sum = 0;

        while (temp > 0) {
            digits++;
            temp /= 10;
        }

        temp = num;
        while (temp > 0) {
            int rem = temp % 10;
            sum += pow(rem, digits);
            temp /= 10;
        }

        if (sum == num)
            printf("%d is a Narcissistic number.\n", num);
        else
            printf("%d is not a Narcissistic number.\n", num);
    }

    else {
        printf("Invalid choice.\n");
    }

    return 0;
}