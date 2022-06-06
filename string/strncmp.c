#include<stdio.h>
#include<string.h>
void main(){
    char s1[20] = "Record Book";
    char s2[20] = "Record Work";
    if (strncmp(s1, s2,6) == 0) {
        printf("string1 and string2 are equal");  
    }
    else{
        printf("string1 and string2 are not equal");
    }
}