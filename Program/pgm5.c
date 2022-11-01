/* Program to find the sum and product of all the elements in the array.*/ 
#include<stdio.h>
int main()
{
    int i, size, sum=0, pro = 1;
    printf("\n Enter the size: ");
    scanf("%d", &size);
    int arr[size];
    printf("\n Enter the elements in the array: ");
    for ( i = 0; i < size; i++){
        scanf("%d", &arr[i]);

    }   
    for ( i = 0; i < size; i++){
        sum = sum + arr[i];
        pro = pro * arr[i];
    }
    printf("\nThe sum of array elements is: %d", sum);
    printf("\nThe product of array elements is: %d", pro);
    return 0;
}