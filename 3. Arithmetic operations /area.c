#include <stdio.h>
int main(){

    //What it does: it shows cheruto how to calculate area of a circle using C

    const float PI = 3.14159;
    float radius = 5;
    char welcome[] = "This is my area of a circle in C";
    char thanks[] = "Thank you for observing the phenomena";

    // Stores the values of area here.

    float area;

    //We will have to calculate the area first in code.

    area = PI * radius * radius;

    printf("\nWelcome:%s\n",welcome);
    printf("Results:%0.2f\n", area);
    printf("End:%s\n\n", thanks);


    return 0;
}