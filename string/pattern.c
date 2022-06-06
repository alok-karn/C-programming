#include<stdio.h>
int main(){
    int i, w, p;
    char str[] = "hello";
    printf("\n");
    for(i=0; i<5; i++){
        p = i + 1;
        printf("\n %-5. *s", p, str);
    }
    printf("\n");
    for( i=4; i>=0; i--){
        p = i + 1;
        printf("\n %-5. *s", p, str);

    }
    return 0;
}