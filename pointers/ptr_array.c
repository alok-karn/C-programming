#include<stdio.h>
int main()
{
    int n, i;
    printf("Enter the size of an array: \n");
    scanf("%d", &n);

    int arr[n];
    int *ptr;
    ptr = arr;
    printf("\nEnter the array elements:\n ");
    for (int i = 0; i < n; i++){
        scanf("%d", (ptr + i));
    }
    printf("\nThe enterd elements are: \n");
        for (int i = 0; i < n; i++){
            printf("%d\t", *(ptr + i));
        }

}