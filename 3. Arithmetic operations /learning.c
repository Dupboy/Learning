#include <stdio.h>
int main(){

    //Arithmetic operators

    // + (Addition)
    // - (subtraction)
    // * (multiplication)
    // / (division)
    // % (modulus) = remainder
    // ++ (increment)
    // -- (decrement)

    //int x = 4;
    //int y = 2;

    //int z = x + y;
    //int z = x * y;
    //float z = x / (float)y;
    //int z = x % y;


    /*Augmented Assigned operators = used to replace a statement when an 
    operator takes a variable as one of its arguments and then assigns the results back to the same variable.*/

    //Used when incrementing a variable or an integer

    int x = 5;

    //x++;
    //x--;
    
    //x = x + 5;
    //x+=5;
    //x = x*5;
    //x*= 5;
    //x = x / 2;
    //x/= 2;
    //x = x % 2;
    x%= 2;


    printf("%d\n", x);




    return 0;
}