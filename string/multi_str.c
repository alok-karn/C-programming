#include<stdio.h>
#include<string.h>
int main(){
    char str[200];
    int i=0, word_count = 0, line_count = 0, char_count = 0;
    printf("\nEnter '0' to end");
    printf("\nEnter the text: ");
    scanf("%c", &str[i]);
    while(str[i] != '0'){
        i++;
        scanf("%c", &str[i]);
    }
    str[i] = '\0';
    i = 0;
    while(str[i] != '\0'){
        if (str[i] == '\n' || i == 79)
            line_count++;
        if (str[i] == ' ' && str[i+1] != ' ')
            word_count++;
        char_count++;
        i++;
    }

    printf("\nThe total count of words is: %d", word_count+1);
    printf("\nThe total count of lines is: %d", line_count+1);
    printf("\nThe total count of characters is: %d", char_count);
    return 0;
 }