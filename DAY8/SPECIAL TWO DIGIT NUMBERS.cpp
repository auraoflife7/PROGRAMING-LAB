#include <stdio.h>
int main() {
    int num, firstDigit, secondDigit, sum, product, result;
    printf("Enter a two-digit number: ");
    scanf("%d", &num);
    if (num < 10 || num > 99) {
        printf("Please enter a valid two-digit number.\n");
        return 0;
    }
    firstDigit = num / 10;
    secondDigit = num % 10;
    sum = firstDigit + secondDigit;
    product = firstDigit * secondDigit;
    result = sum + product;
    if (result == num)
        printf("%d is a Special two-digit number.\n", num);
    else
        printf("%d is not a Special two-digit number.\n", num);
    return 0;
}