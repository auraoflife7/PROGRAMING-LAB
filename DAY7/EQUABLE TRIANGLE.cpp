#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter height=");
    scanf("%d",&a);
    printf("Enter base=");
     scanf("%d",&b);
    printf("Enter hypotenuse=");
     scanf("%d",&c);
    int p=a+b+c;
    int z=(b*a)/2;
    if(p==z){
        printf("The triangleis Equable");
    }
    else if(p!=z){
printf("The triangle is not Equable");
    }
    else("Wrong Data Input");
    return 0;

}