#include<stdio.h>
#include<string.h>
int main(){
    char str[100], temp;
    int i = 0, j = 0;
    printf("\nEnter the string: ");
    gets(str);
    j = strlen(str) - 1;
    while(i<j){
        temp = str[j];
        str[j] = str[i];
        i++;
        j--;

    }

    printf("\n The reversed string is");
    puts(str);
    return 0;
}