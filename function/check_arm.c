#include<stdio.h>
#include<math.h>
int sub(int n){
    int count = 0, total;
    while(n != 0){
        n = n / 10;
        count = count + 1 ;
    }
    total = count;
    return total;
}
int chk_arm(int num){
    int sum = 0, flag, rem;
    int res = sub(num);
    flag = num;
    while(flag > 0){
        rem = flag % 10;
        sum += pow(rem, res);
        num = num / 10;
    }
    if ( sum == num ){
        printf("\n The number is an armstrong number.");
        return num;
    }else{
        printf("\n The number is not an armstrong number.");
    }

}
int perfect( int numb, int sum){
    int res = chk_arm(numb);
    for ( int i = 1; i < res; i++){
        if(res % i == 0){
            sum += i;

        }
    }

    if ( sum == res){
        printf("\n The number is a perfect number and the sum of factor is %d ", sum);

    }else{
        printf("\n The given number is not a perfect number ");
    }

}
int main(){
    int number;
    printf("\n Enter the number: ");
    scanf("%d", &number);
    chk_arm(number);
    return 0;
}