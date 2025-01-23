#include <stdio.h>
#include <math.h>

int main(){


    //bmi = weight/height sqr

    double weight;
    double height;
    double bmi;

    char welcome[] = "Welcome to my bmi calculator";
    char end[] = "Thank you for using me";

    printf("\n%s\n", welcome);

    printf("Enter your weight:");
    scanf("%lf", &weight);

    printf("Enter your height:");
    scanf("%lf", &height);

    bmi = weight / pow(height, 2);

    printf("Your bmi is: %0.2lf\n", bmi);
    printf("%s\n", end);



    return 0;
}