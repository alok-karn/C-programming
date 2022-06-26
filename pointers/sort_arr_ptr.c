#include<stdio.h>
int swap(int *num1, int *num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int *sort(int arr[100], int N){
    int i ,j;
    int *arr_ptr;
    arr_ptr = arr;
        for(i=0; i<N; i++){
            for(j= i + 1; j<N; j++){
                if ( arr[i] > arr[j] ){
                    swap(&arr[i], &arr[j]);
                }

        }
        }
    return arr_ptr;
}

int main()
{
    int i, size;
    int *ptr;
    printf("\nEnter the size: ");
    scanf("%d", &size);
    int arr[size];
    printf("\nEnter the elements into an array: ");
    for (i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    ptr = sort(arr, size);
    printf("\nThe sorted elements are: ");
    for(i = 0; i < size; i++){
        printf("%d\t", *(ptr + i));
    }
}