#include<stdio.h>
int main(){
    char s1[10] = "Hello", s2[10] = "World";
    strcat(s1, s2);
    printf("string after concatenation is: %s", s1);
}