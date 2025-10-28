#include <stdio.h>


int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}


int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}


int fibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int choice, n, a, b, i;

    while (1) {
        printf("\n--- Menu ---\n");
        printf("1. Factorial of a number\n");
        printf("2. GCD of two numbers\n");
        printf("3. Fibonacci series\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &n);
                printf("Factorial of %d = %d\n", n, factorial(n));
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("GCD of %d and %d = %d\n", a, b, gcd(a, b));
                break;

            case 3:
                printf("Enter the number of terms: ");
                scanf("%d", &n);
                printf("Fibonacci series: ");
                for (i = 0; i < n; i++) {
                    printf("%d ", fibonacci(i));
                }
                printf("\n");
                break;

            case 4:
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
