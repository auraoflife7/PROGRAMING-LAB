#include <stdio.h>

int main() {
    int lower, upper, i, j, fg;
    
    printf("Enter the lower limit: ");
    scanf("%d", &lower);
    printf("Enter the upper limit: ");
    scanf("%d", &upper);
    
    for (i = lower; i <= upper; i++) {
        fg = 1;  
        
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                fg = 0; 
                break;
            }
        }
        if (fg == 1 && i > 1) {
            printf("%d ", i);
        }
    }
    
    printf("\n");
    return 0;
}

