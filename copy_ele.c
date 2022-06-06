#include<stdio.h>
int main(){
    int i, size;
    printf("\n Enter the size of an array: ");
    scanf("%d", &size);

    int arr[size], cpy[size];
    printf("\n Enter the elements in the array: ");
    for ( i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    for ( i = 0; i < size; i++){
        cpy[i] = arr[i];
    }
    printf("\n The elements in the original array are:\n");
    for( i = 0; i < size; i++){
        printf("%d\t",arr[i]);
    }

    printf("\n The elements in coppied array are:\n ");
    for(i = 0; i < size; i++){
        printf("%d\t",cpy[i]);
    }
    return 0;
}