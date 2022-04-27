#include <stdio.h>
#include "../Libraries/utils.h"
int main(){
    
    for(int i=0; i<50; i = i + 10){
        printf("iterador_i: %d\n",i);
        sleep(1000);
        
        int counter = 1;
        
        while (counter<=3){
            printf("\tconunter: %d\n",counter);
            counter = counter+1;
            sleep (1000);
        }
        
    }

    return 0;
}