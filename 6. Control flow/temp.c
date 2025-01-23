#include <stdio.h>
#include <ctype.h>

int main(){

    char unit;
    float temp;

    printf("\nEnter the unit name(F)or(C):");
    scanf("%c", &unit);

    unit = toupper(unit);

    if (unit == 'C'){
        printf("Enter the temperature in celsius: ");
        scanf("%f", &temp);
        temp = temp * 9/5 + 32;
        printf("The temperature in fahrenheit is : %0.1f\n", temp);


    }
    else if (unit == 'F'){
        printf("Enter the temperature in fahrenheit: ");
        scanf("%f", &temp);
        //°C = (°F - 32) ÷ (9/5)
        temp = ((temp - 32) * 5) / 9;
        printf("The temperature in celsius is : %0.1f\n", temp);

    }
    else{
        printf("%c is not a valid unit of measurement", unit);
    }




return 0;
}