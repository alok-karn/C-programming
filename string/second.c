#include<stdio.h>

void displayString(char str[]){
    printf("\nString Output:  ");
    puts(str);
}

void main(){
    char str[50];
    printf("Enter a string: ");
    gets(str);
    displayString(str); //Passing a string
}