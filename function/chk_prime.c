#include<stdio.h>
void check(int num){ // user defined function
    int count=0, i;
    for( i = 2; i < num/2; i++){
        if(num % i == 0){
            count++;
        }
    }

    if ( count == 0){
        printf("\n The number is prime ");
    }else{
        printf("\n The number is not prime ");
    }
}
int main(){
    int number;
    printf("\n Enter the number ");
    scanf("%d", &number);
    check(number);
    return 0;
}