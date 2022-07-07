#include <stdio.h>
#include <stdlib.h>

int main()  {
    
    printf("hello world on 'c'  \n");  /* \n" it makes change line at the end of the line
    \n change line at beginning of line */
    
    int age = 50;
    double gpa = 3.7; //decimal data
    char  grade = 'S';
    char phrase[] = "String Chain";
    printf("\"Hello\" \n\"World\" \n ");  // \" it stores quotes on strings.  
   
   
    printf("\nMy favorite %s is %d \n", "number",  10000 );  /* %d placeholder for intigers %s placeholder for strings
    %c  placeholder for single characters */
    
    printf(" decimal number: %f \n" , 6.5 );   
    
    
    printf("%f" , pow(2 , 4));
    /* math functions   wich could be called: 
       pow: take a number to the indicated power
       sqrt: square root  
       floor: round a number down
       ceil: round a number to the next high number 
    return 0; */


}

