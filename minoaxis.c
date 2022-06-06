#include<stdio.h>
int main(){
    int size, i, j, minor_sum=0;
    printf("\n Enter the size of row: ");
    scanf("%d", &size);
    printf("\n Enter the size of column: ");
    scanf("%d", &size);

    int arr[size][size];
    printf("\n Enter the elements: \n");
    for ( i = 0; i< size; i++){
        for ( j = 0; j < size; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    for ( i = 0; i< size; i++){
        for ( j = 0; j < size; j++){
            if( i+j == ((size + 1) - 2)) {
           minor_sum += arr[i][j];
            }
        }
    }



    printf("\n The matrix is: ");
    for ( i = 0; i < size; i++){
        printf("\n");
        for ( j = 0; j < size; j++){
            printf("%d\t",arr[i][j]);
        }
    }

    printf("\n The sum of array elements are: %d", minor_sum);
    return 0;
}