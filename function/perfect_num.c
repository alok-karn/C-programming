#include<stdio.h>
int perfect( int num, int sum){
    for ( int i = 1; i < num; i++){
        if(num % i == 0){
            sum += i;

        }
    }

    if ( sum == num){
        printf("\n The number is a perfect number and the sum of factor is %d ", sum);

    }else{
        printf("\n The given number is not a perfect number ");
    }

}

int main(){
    int n;
    printf("\n Enter the number :: ");
    scanf("%d", &n);

    perfect(n, 0);
    return 0;
}