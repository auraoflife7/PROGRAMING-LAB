#include <stdio.h>
int main() {
    int num, digit, smallest;
    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input. Please enter a valid integer.\n");
        return 0;
    }
    num = (num < 0) ? -num : num; // handle negative numbers
    smallest = 9;
    if (num == 0) {
        printf("Smallest digit is 0\n");
        return 0;
    }
    while (num > 0) {
        digit = num % 10;
        if (digit < smallest)
            smallest = digit;
        num /= 10;
    }
    printf("Smallest digit is %d\n", smallest);
    return 0;
}