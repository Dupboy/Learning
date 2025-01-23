#include <stdio.h>
#include <stdbool.h>

int main(){


//Cheruto Perfomance

int position = 1;
int points = 75;
int form = 1;
char grade[] = "A-";
char name[] = "Sheila Cheruto";
char class[] = "West";
char Maths = 'B';
char English = 'B';
char Kiswahili = 'A';
char Biology = 'A';
char Chemistry = 'B';
char Cre = 'A';
char Business = 'A';


// Report Form
printf("\nName:%s\n",name);
printf("Form:%d\t",form);
printf("%s\n\n",class);
printf("Subject Grades:\n");
printf("Maths:%c\n",Maths);
printf("English:%c\n",English);
printf("Kiswahili:%c\n",Kiswahili);
printf("Biology:%c\n",Biology);
printf("Chemistry:%c\n",Chemistry);
printf("Cre:%c\n",Cre);
printf("Business:%c\n",Business);
printf("Total Points:%d\n",points);
printf("Grade:%s\n",grade);
printf("Position:%d\n",position); 




return 0;


}