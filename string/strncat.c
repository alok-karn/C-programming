#include<stdio.h>
#include<string.h>
void main() {
    char s1[10] = "Hello";
    char s2[10] = "1234";
    strncat(s1, s2, 3);
    printf("Concatenation using strncat: %s", s1);
}