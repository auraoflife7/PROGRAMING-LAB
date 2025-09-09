#include<stdio.h>
int main(){
    float unit,bill;
    printf("enter your total unit :");
    scanf("%f",&unit);
    if (unit<=100)
    {
        bill=5*unit;
        printf("%f is your total bill",bill);
    }
    else if (unit>100 && unit<=200)
    {
        bill=7*unit;
        printf("%f is your total bill",bill);
    }
    else{
        bill=10*unit;
        printf("%f is your total bill",bill);
    }
    return 0;
}