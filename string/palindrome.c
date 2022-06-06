#include<stdio.h>
int main(){
    char str[100];
    int i=0, j, length = 0;
    printf("\nEnter the string: ");
    gets(str);
    while(str[i]=='\0'){
    length++;
    i++;
    }
    i = 0;
    j = length - 1;
    while(i <= length/2){
        if(str[i] == str[j]){
            i++;
            j--;

        }
        else
        break;
    }
    if(i>=j)
        printf("\n Palindrome");
    else
        printf("\n Not a Palindrome");

return 0;
}