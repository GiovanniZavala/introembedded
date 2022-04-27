#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "../libraries/myFunctions.h"

// bool IsEvenFunct( int numberToTest);

int main (int argc, char** argv){
    //par e impar
    bool IsEven = IsEvenFunct(2);
    printf("Result = %d\n,",IsEven);
    
    return 0;
}

//definir la función

// bool IsEvenFunct( int numberToTest){
//     bool IsEven = (numberToTest %2 == 0);
//     if (IsEven) return true;

//     return false;
// }


    