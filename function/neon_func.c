#include<stdio.h>
int squ(int n){
    int square=1;
    square = n * n;
    return square;
}

int neon(int num){
    int sum = 0, flag, rem, res;
    flag = num;
    res = squ(num);
    while( res > 0){
        rem = res % 10;
        sum = sum + rem;
        res = res / 10;
    }
    
    if ( flag == sum){
        printf("\n Neon Number");
    }else{
        printf("\n Not a Neon Number");
    }

}
int main(){
    int numb;
    printf("\n Enter the number: ");
    scanf("%d", &numb);
    neon(numb);
    return 0;

}