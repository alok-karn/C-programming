#include<stdio.h>
int fibo(int num){
   if ( num == 0)
        return 0;
    else if ( num == 1){
        return 1;
    }
    else
        return ( fibo(num-1) + fibo(num-2) );
}


int main(){
    int a = 0, n, i, result;
    printf("\n Enter the range.");
    scanf("%d",&n);

    printf("\n The series results are: ");
    for (i = 1; i <= n; i++){
        printf("%d\t", fibo(a));
        a++;
    }
    return 0;
}