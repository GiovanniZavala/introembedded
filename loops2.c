#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(int argc , char** argv){
    
    int number = atoi(argv[1]);

    
        while (number<=10){
           number = number+1;
            
            for (number ;number <= 5; number = number + 1){
                if(number%2==0){
                    printf("you enter a even number:%i\n",number);
                }else{
                    printf("you enter an odd number :%i\n",number);
                };
            };
        }

        
    return 0;
}

   
    