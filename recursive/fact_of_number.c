#include<stdio.h>
int fact(int n){
    if ( n >= 1 ) 
        return n * fact(n-1);
    else
        return 1;
    
}

int main(){
    int num, res;
    printf("\n Enter the number :: ");
    scanf("%d",&num);
    res = fact(num);

    printf("\n The factorial of %d is %d", num, res);
    return 0;

}