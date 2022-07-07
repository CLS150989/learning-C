#include <stdio.h>
#include <stdlib.h>


int max(int num1 , int num2 )  {
    int BigNum;
    if (num1 > num2) {
        BigNum = num1;
    } else { 
        BigNum = num2;
    }
    return BigNum;


}

int main () {

printf("%d",  max(4,6) );

return 0;

}