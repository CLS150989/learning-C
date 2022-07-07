#include <stdio.h>
#include <stdlib.h>

int main () {

/*char grade; 
printf("Enter your grade");
scanf("%c", &grade);
printf("your grade is %c", grade);

// %c allouds to print single characters

*/


char name [20];
printf("enter your name: ");
fgets(name, 20, stdin); //fgets allouds to obtain a large String from user
//stdin is standard input 

printf("Your name is ", name);


}


