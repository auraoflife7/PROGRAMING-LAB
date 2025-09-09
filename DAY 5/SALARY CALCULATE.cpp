#include<stdio.h>
int main(){
    float salary,income;
    printf(" enter basic salary\n ");
    scanf("%f",&salary);
    if (salary>=30000 && salary<50000)
    {
        income=salary+0.15*(salary)+0.10*(salary)+0.05*(salary);
        printf("%f is your total income\n",income);
    }
    else if (salary>=50000)
    {
        income=salary+0.20*(salary)+0.10*(salary)+0.05*(salary);
        printf("%f is your total income\n",income);
    }
    else{
        income=0.10*(salary)+0.05*(salary);
        printf("%f is your total income\n",income);
    }
    return 0;
}