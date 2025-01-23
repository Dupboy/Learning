#include <stdio.h>
#include <string.h>

int main(){

int age;
char name[25]; // Allocated 25 bytes of memory

printf("What is your name");
//scanf("%s", &name );

fgets(name, 25, stdin); // scanf doesnt read whitespaces in user inputs
name[strlen(name)-1] = '\0'; // Removes newline that comes with fget

printf("How old are you?");
scanf("%d", &age ); // used to read input, the ampersand is the memory adress to store the values.

printf("Hello %s, how are you?\n", name);
printf("You are %d years old\n", age );







return 0;

}