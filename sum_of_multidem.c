#include<stdio.h>
int main(){
    int size_r, size_c, i, j, sum=0;
    printf("\n Enter the size of row: ");
    scanf("%d", &size_r);
    printf("\n Enter the size of column: ");
    scanf("%d", &size_c);

    int arr[size_r][size_c];
    printf("\n Enter the elements: \n");
    for ( i = 0; i< size_r; i++){
        for ( j = 0; j < size_c; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    for ( i = 0; i< size_r; i++){
        for ( j = 0; j < size_c; j++){
           sum += arr[i][j];
        }
    }



    printf("\n The matrix is: ");
    for ( i = 0; i < size_r; i++){
        printf("\n");
        for ( j = 0; j < size_c; j++){
            printf("%d\t",arr[i][j]);
        }
    }

    printf("\n The sum of array elements are: %d", sum);
    return 0;
}