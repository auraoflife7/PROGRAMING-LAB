#include <stdio.h>

int main() {
    int n, r_n = 0, o_n, r;

    printf("Enter an integer: ");
    scanf("%d", &n);

    o_n = n; 

   
    while (n != 0) {
        r = n % 10; 
        r_n = r_n * 10 + r; 
        n /= 10; 
    }

    
    if (o_n == r_n) {
        printf("%d is a palindrome number.\n", o_n);
    } else {
        printf("%d is not a palindrome number.\n", o_n);
    }

        return 0;
}