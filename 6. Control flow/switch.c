#include <stdio.h>

int main(){

    //switch statements-a more efficient alternative for using many else-if statements
    //Allows a value to be tested for equality

    char grade;

    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);

    switch(grade){
    case 'A':
        printf("Perfect\n");
        break;
    case 'B':
        printf("You did good\n");
        break;
    case 'C':
        printf("You did okay\n");
        break;
    case 'D':
        printf("At least its not an f\n");
        break;
    case 'F':
        printf("You failed\n");
        break;
    default:
        printf("Please enter valid grade\n");        
    }
  
    return 0;
}