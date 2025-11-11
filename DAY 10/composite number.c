#include<stdio.h>
int main(){
    int num, i, count=0;
    printf("enter a number:");
    scanf("%d",&num);
    if (num <= 1){
        printf("enter imput. enter a number greater than 1.\n");
        return;

    }
    for(i=2;i<= num/2;i++){
        if(num % i == 0){
            count++;
            break;
        }
    }
    if (count >=0)
    printf("%d is a composite number.\n",num);
    else
    printf("%d is not a composite number.\n",num);
    return 0;
}