#include<stdio.h>
void main(){
    char s1[30] = "hi";
    char s2[30] = "programmer";
    strcpy(s1, s2);
    printf("String s1 is: %s", s1);
}