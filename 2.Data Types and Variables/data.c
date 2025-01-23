#include <stdio.h>
#include <stdbool.h>

//Format specifiers




int main(){

int x = 3456; // Uses 4 bytes of memory (%d)
unsigned int r = 4294967295; //4 bytes (%u)

char t = 'G'; //Single Character(%c)
char b[] = "Bro"; //Array of characters (%s)

float c = 5.6; //Use 4 bytes of memory(32 bits of precision) (6-7 dijits) (%f)
double gpa = 5.67686958599;// double the precision of a float - 8 bytes of memory(64 bits precision)-(15-16 dijits) (%lf)

bool e = false; // Stores true or false (%d) uses 1 byte of memory 1 represents true, 0 represents false

char f = 125; //Uses 1 byte of memory (stores integers between -128 to +127) (%d or %c)
unsigned char p = 255; //Uses 1 byte of memory(stores positive numbers only 0 to +255)  (%d or %c)

short int h = 25000; //stores 2 bytes of memory (stores dijits from -32,768 to +32,767) %d
unsigned short int y = 55000;//2 bytes (0-65,535)  %d

//constants = a fixed value that cannot be altered by the program during its execution

const float PI = 3.14159;
double pi = 3.14159;


//printf("%0.15f\n",c);
//printf("%0.15lf\n",gpa);
//printf("%d\n",false);
//printf("%c\n",p);
//printf("%d\n",h);
//printf("%d\n",y);
//printf("%d\n",x);
//printf("%u\n",r);
//printf("%f\n", PI);


return 0;



}