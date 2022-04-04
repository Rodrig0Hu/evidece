#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "..libraries/myfunctions.h"

//prototype functions.

//bool isEvenFunct(int numberToTest);

int main (int argc, char** argv){
    //par o impar
    bool isEven = isEvenFunct(2);
    printf("result = %d\n", isEven);


    return 0;
    }
//definir funcion
// bool isEvenFunct(int numberToTest) {

//     bool isEven = (numberToTest % 2 == 0);

//     if (isEven){
//         return true;    
//     };

//     return false;
//     }