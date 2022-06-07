#include<stdio.h>
int main(){
    int a, p, i, pow = 1;
    printf("\nEnter the number: ");
    scanf("%d", &a);
    printf("\nEnter the exponent: ");
    scanf("%d", &p);
    for(i = 0; i < p; i++){
        pow *= a;
    }

    printf("\nThe result is: %d", pow);

}