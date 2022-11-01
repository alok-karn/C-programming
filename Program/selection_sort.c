#include<stdio.h>
int main(){
    int i, size, j, temp;
    printf("\n Enter the size of an array: ");
    scanf("%d", &size);

    int arr[size];
    printf("\n Enter the elements inside the array: ");
    for ( i=0; i < size; i++){
        scanf("%d", &arr[i]);

    }

    for ( i=0; i < size; i++){
        for (j = i+1; j < size; j++){
            if( arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;

            }
        }
    }
    printf("\n The sorted array elements are: ");
    for ( i = 0; i < size; i++){
        printf("%d\t", arr[i]);

    }
   

    return 0;
}