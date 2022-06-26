#include<stdio.h>
int main()
{
    int n, i,sum = 0;
    printf("Enter the size of an array: \n");
    scanf("%d", &n);

    int arr[n];
    int *ptr;
    ptr = arr;
    printf("\nEnter the array elements:\n ");
    for (int i = 0; i < n; i++){
        scanf("%d", (ptr + i));
    }
    for (int i = 0; i < n; i++){
        sum += *(ptr + i);
    }

    printf("The sum of array elements is %d", sum);
    return 0;
}