#include <stdio.h>

int main() {
    char ch = 'A';
    int rows = 4;

    for (int i = 1; i <= rows; i++) {
      
        for (int space = i; space < rows; space++) {
            printf(" ");
        }

        for (int j = 1; j <= i; j++) {
            printf("%c", ch);
            ch++;
        }

        printf("\n");
    }
    return 0;
}