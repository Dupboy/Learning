#include <stdio.h>
#include <math.h>

int main(){

    float a;
    float b;
    float c;

    printf("\nWelcome to my hypotenuse calculator\n");

    printf("Enter side a:");
    scanf("%f", &a);

    printf("Enter side b:");
    scanf("%f", &b);   

    //Calculations of the hypotenuse 

    c = sqrt(pow(a, 2) + pow(b, 2));

    printf("Result:%f\n", c);
    printf("Thank you for using me\n");







    return 0;
}