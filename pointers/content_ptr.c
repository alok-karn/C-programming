#include<stdio.h>
int main(){
    int x;
    x = 5;
    int *ptr;
    ptr = &x;
    printf("\nThe content of x = %d", *ptr);
}