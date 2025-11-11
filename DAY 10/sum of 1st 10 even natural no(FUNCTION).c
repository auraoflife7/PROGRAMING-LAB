#include<stdio.h>


int sumOfEvenNumbers() {
    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        sum = sum + (2 * i); 
    }
    return sum;
}

int main() {
    int result;
    result = sumOfEvenNumbers(); 
    printf("Sum of first 10 even natural numbers = %d\n", result);
    return 0;
}