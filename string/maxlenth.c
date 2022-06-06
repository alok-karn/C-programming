#include<stdio.h>
#include<string.h>
void main(){
    char str1[20] = "Record Book";
    printf("Length of string str1 when maxlength is 30: %d", strlen(str1, 30));
    printf("Length of string str1 when maxlength is 10: %d", strlen(str1, 10));

}