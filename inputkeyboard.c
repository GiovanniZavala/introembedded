#include <stdio.h>

char firstname[255];
char lastname[255];
int age;
char state[255];

int main(){
    printf("enter a name: \n");
    scanf("%s", firstname);
    printf("enter lastname: \n");
    scanf("%s", lastname);
    printf("enter your age: \n");
    scanf("%d", age);
    printf("enter state: \n");
    scanf("%s", state);
    return 0;

}