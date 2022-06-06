#include<stdio.h>
int gre(int n1, int n2, int n3){

    if(n1 > n2 && n1 > n3){
        return n1;
    }else if( n2 > n3 && n2 > n1){
        return n2;
    }else{
        return n3;
    }
    
}

int main(){
    int a, b, c, res;
    printf("\n Enter the first number: ");
    scanf("%d", &a);
    printf("\n Enter the second number: ");
    scanf("%d", &b);
    printf("\n Enter the third number: ");
    scanf("%d", &c);

    res = gre(a, b, c);
    printf("\n The greatest number is :: %d ", res);
    return 0;


}