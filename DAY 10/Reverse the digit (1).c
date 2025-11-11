#include <stdio.h>

int main() {
    int n, r_n = 0, r;

    printf("Enter an integer: ");
    
    scanf("%d", &n);

   
    while (n != 0) {
      
        r = n % 10;
     
        r_n = r_n * 10 + r;
        
        n /= 10;
    }

  
    printf("Reversed Number = %d\n", r_n);

    return 0;
}