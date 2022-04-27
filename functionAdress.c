#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "../libraries/myFunctions.h"

// bool IsEvenFunct( int numberToTest);

int main (int argc, char** argv){
    //par e impar
    bool IsEven = IsEvenFunct(2);
    printf("Result = %d\n,",IsEven);
    
    int VarA = 4;
    int VarB = 7;
    
    printf("Before VarA=%d, VarB=%d\n",VarA,VarB);
    swapAddress (&VarA,&VarB);
    //swap (7,4)
    printf("After VarA=%d, VarB=%d\n",VarA,VarB);
    return 0;
}