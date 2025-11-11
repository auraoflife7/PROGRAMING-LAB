#include <stdio.h>

int main() {

    float weight, charge;

    printf("Enter the weight of the parcel in Kg: ");

    scanf("%f", &weight);

    if (weight <= 0) {
        printf("Invalid input! Weight must be a positive number.\n");
    } 

    else if (weight <= 10) {
        charge = weight * 30;
    } 

    else if (weight <= 30) {
       
        charge = (10 * 30) + ((weight - 10) * 20);
    } 

    else {

        charge = (10 * 30) + (20 * 20) + ((weight - 30) * 15);
    }


    if (weight > 0) {
       printf("The total charge for the parcel is: Rs. %f\n", charge);
    }

    return 0;
}