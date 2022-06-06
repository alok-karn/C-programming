#include<stdio.h>
int swap(int *num1, int *num2) { 
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;

}

int bubbleSort(int arr[], int n){
    int i, j;
    for ( i = 0; i < n-1; i++ ){
        for ( j = 0; j < n-1-i; j++ ){
            if ( arr[j] > arr[j+1] ){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

int printarr(int arr[], int size){
    int i;
    for (i=0; i < size; i++){
        printf("%d ",arr[i]);

    }
    printf("\n");
}

int main(){

    int arr[100], n, i;
    printf("\nEnter the n of the array:");
    scanf("%d",&n);
    printf("\n Enter the number in an array: ");
    for( i = 0; i < n; i++ ){
        scanf("%d",&arr[i]);
    }

    bubbleSort(arr, n);
    printf("\nThe sorted array is: ");
    printarr(arr, n);

    return 0;
}