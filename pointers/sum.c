#include<stdio.h>
int main() {
    int num1, num2, num3;
    int sum = 0;
    int *ptr1, *ptr2, *sum_ptr1;
    ptr1 = &num1; 
    ptr2 = &num2;
    sum_ptr1 = &sum;
    printf("\nEnter the first number: ");
    scanf("%d", ptr1);
    printf("\nEnter the second number: ");
    scanf("%d", ptr2);
    *sum_ptr1 = *ptr1 + *ptr2;
    printf("\nThe sum of the numbers is %d", *sum_ptr1);

    return 0;
}