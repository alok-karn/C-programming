#include<stdio.h>
int add( int num1, int num2)
{
    int sum;
    sum = num1 + num2;
    return sum;

}

int main(){
    int n1, n2, res;
    printf("\n Enter the first number: ");
    scanf("%d", &n1);
    printf("\n Enter the second number: ");
    scanf("%d", &n2);

    res = add(n1, n2);

    printf("\n The sum of %d + %d is %d", n1, n2, res);
    return 0;

}