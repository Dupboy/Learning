#include <stdio.h>

int main(){


// Area of a circle = πr2

const float PI = 3.14159;
float radius;
loat area;

char welcome [] = "This is my area of a circle calculator";
char end [] = "Thank you for using me";

//welcome message
printf("%s\n",welcome);

printf("Enter the radius:");
scanf("%f", &radius);

//area value stored here
area = PI * radius * radius;

printf("Answer =%0.2f\n", area);
printf("%s\n", end);




return 0;

}
