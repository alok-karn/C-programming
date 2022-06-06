/*Wrtie a program to pass Upper and Lower bound to the function and print the prime numbers between the range. */
#include<stdio.h>
int prime(int lb, int ub){
    int i,j;
    for ( i = lb; i <= ub; i++){
        int  count=0;
         for( j = 2; j <= i/2; j++){
        if(i % j == 0){
            count++;
            }
        }

    if ( count == 0){
        printf("\t%d", i);
    }else{
        continue;
    }
}
    }
int main(){
    int rang1, rang2;
    printf("\n Enter the lower bound: ");
    scanf("%d",&rang1);
    printf("\n Enter the upper bound: ");
    scanf("%d", &rang2);
    prime(rang1, rang2);
    return 0;
}