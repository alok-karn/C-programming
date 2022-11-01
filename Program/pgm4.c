/* Program to read n number of values in an array and display it in reverse order.*/
#include<stdio.h>
int main()
{
    int i, size;
    printf("\nEnter the size of an array: ");
    scanf("%d", &size);
    int arr[size];
    printf("\n Enter the elements in the array: ");
    for ( i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    printf("\n The array elements are:");
    for ( i = size-1; i >= 0; i--){
        printf(" %d\t", arr[i]);
    }
return 0;
}