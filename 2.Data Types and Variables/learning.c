#include <stdio.h>
int main(){


/*
Variables- allocated space in memory to store a value
We refer to the variables name to access the stored value
To create a variable we need to declare a variable and initialize it

*/ 

/*int x; //declaration
x = 2; //initialization
int x = 123 //declaration and initialization
*/

int age = 19; //integer
char grade = 'C'; //single character or letter
char name[] = "Victor";
float  gpa = 1.3; //floating point number- Integers with decimals

//Format specifiers
printf("Hello %s\n",name);//%s represents character strings
printf("You are %d years old\n",age);//%d represents integer data types
printf("Your average grade is %c\n",grade);
printf("Your gpa is %f\n",gpa);


return 0;
}