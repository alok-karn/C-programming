#include<stdio.h>
int main(){
    char str[100], copy_str[100];
    char *sptr, *pcopy_str;
    sptr = str;
    pcopy_str = copy_str;
    printf("\n Ente * to end");
    printf("\n Enter the string: ");
    scanf("%c", sptr );
    while(*sptr != '\0'){
        sptr++;
        scanf("%c", sptr);
    }
    *sptr = '\0';
    sptr--;
    while(sptr >= str){
        *pcopy_str = *sptr;
        pcopy_str++;
        sptr--;
    }
    *pcopy_str = '\0';
    printf("\n The new text is: ");
    pcopy_str = copy_str;
    while (*pcopy_str != '\0'){
        printf("%c", *pcopy_str);
        pcopy_str++;
    }
   return 0;
}