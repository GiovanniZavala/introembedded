#include<stdio.h> 
#include<string.h> 
 
void main(){ 
int i=0; 
char *a,*b[500]; 
printf("Enter your string: "); 
gets(b);//Scan the string 
printf("Output:\n"); 
a=strdup(b);//create duplicate pointer to the input string for use in string separation function 
char *temp;//To store the separated string's address 
while((temp=strsep(&a," "))!=NULL){ 
for(i=strlen(temp)-1;i>=0;i--){ 
printf("%c",temp[i]);
} 
printf(" "); 
} 
return 0;
} 