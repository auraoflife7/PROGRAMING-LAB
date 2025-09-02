#include <stdio.h>
int main() 
{
	char a;
	printf("Enter H for head or T for tail:");
	scanf("%C",&a);
    if (a=='T') 
        printf("The coin landed on TAILS.\n");
    else 
        printf("The coin landed on HEADS.\n");
    return 0;
}