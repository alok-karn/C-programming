//wap to add two numbers using function.
#include<stdio.h>
int add(int num1, int num2){
    return (num1 + num2);
}

int main(){
    int n1, n2, res;
    printf("\nEnter the first number: ");
    scanf("%d",&n1);
    printf("\nEnter the second number: ");
    scanf("%d",&n2);

    res = add(n1, n2);
    printf("\n The sum of two numbers is: %d",res);
    return 0;
}