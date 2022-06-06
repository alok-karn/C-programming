#include<stdio.h>
int main(){
    int i, size, max, min;
    printf("\n Enter the size of an array: ");
    scanf("%d", &size);

    int arr[size];
    printf("\n Enter the elements in the array: ");
    for ( i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for ( i = 1; i < size; i++){
        if (arr[i] > max){
            max = arr[i];
        }

        if ( arr[i] < min){
            min = arr[i];
        }
    }
    printf("\n The Maximum element in the array is: %d", max);
    printf("\n The Minimum element in the array is: %d", min);

    return 0;
}