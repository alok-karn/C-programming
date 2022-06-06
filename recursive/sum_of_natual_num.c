#include<stdio.h>
int sum(int num){
    if ( num != 0 )
        return num + sum(num-1);
    else
        return num;

}

int main(){
    int number, result;
    printf("\n Enter the number :: ");
    scanf("%d", &number);
    result = sum(number);
    printf("\n The sum of %d natural number is :: %d", number, result);
    return 0;
}