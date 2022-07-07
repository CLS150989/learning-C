#include <stdio.h>
#include <stdlib.h>

int main () {

    printf("top \n");
    sayHi(); //Always havre to call the function
    printf("bottom \n");
    sayName("Chara");
    
    return 0;
 
}



void sayHi () {
    printf("Hello world \n");
}
 //void means that a function will return some kind of information

void sayName (char name []) {  //function with a string chain inside

    printf("hello, %s \n", name);
}

