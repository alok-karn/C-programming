#include<stdio.h>
int main(){
    char str[100], *sptr;
    int chars = 1, lines = 1, words = 1;
    printf("\nEnter the string: ");
    gets(str);
    sptr = str;
    while(*sptr != '\0'){
        if(*sptr == '\n'){
            lines++;
        }
        if(*sptr == ' ' && *(sptr + 1) != ' '){
            words++;
        }
        chars++;
        sptr++;
    }
    printf("\nThe string is:");
    puts(str);
    printf("\nNUmber of characters: %d", chars);
    printf("\nNUmber of lines: %d", lines);
    printf("\nNUmber of words: %d", words);
    return 0;
}