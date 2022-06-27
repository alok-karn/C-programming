#include <stdio.h>

int func(int arr[100], int N)
{
    int i;
    int *parr;
    parr = arr;
    printf("\nEnter the array elements: ");
    for (i = 0; i < N; i++)
    {
        scanf("%d", (parr + i));
    }

    printf("\nThe array elements are: ");
    for (i = 0; i < N; i++)
    {
        printf("%d", *(parr + i));
    }
}

int *comp_arr(int *arr1, int *arr2, int N)
{
    int i;
    int new_arr[N];
    int *arr_ptr1 = arr1;
    int *arr_ptr2 = arr2;
    int *new_ptr = new_arr;

    for (i = 0; i < N; i++)
    {
        if (*(arr_ptr1 + i) == *(arr_ptr2 + i))
        {
            *(new_ptr + i) = 1;
        }
        else
            *(new_ptr + i) = 0;
    }

    return new_ptr;
}

int main()
{
    int size1, size2;
    int i;
    int *res_ptr;
    printf("\nEnter the size of the first array:: ");
    scanf("%d", &size1);
    printf("\nEnter the size of the second array:: ");
    scanf("%d", &size2);
    int arr1[size1], arr2[size2];
    func(arr1, size1);
    func(arr2, size2);
    res_ptr = comp_arr(arr1, arr2, size2);
    printf("\nThe new array is:: ");
    for (i = 0; i < size1; i++)
    {
        printf("%d", *(res_ptr + i));
    }
}