#include<stdio.h>
int main(){
    char str[100], copy_str[100];
    char *sptr, *pcopy_str;
    int i = 0;
    sptr = str;
    pcopy_str = copy_str;
    printf("\nEnter the string: ");
    gets(str);
    while( *sptr != '\0'){
        *pcopy_str = *sptr;
        sptr++, pcopy_str;     
    }
    *pcopy_str = '\0';
    printf("\nThe copied text is: ");
    pcopy_str = copy_str;
    while(*pcopy_str != '\0'){
        printf(" %c", *pcopy_str);
        pcopy_str++;
    }
    return 0;
}