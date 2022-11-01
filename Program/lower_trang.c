#include<stdio.h>
int main()
{
    int row, col, i, j;
    printf("\n Enter the row-size of matrix: ");
    scanf("%d", &row);

    printf("\n Enter the column size of matrix: ");
    scanf("%d", &col);

    int mat[row][col];
    if (row == col){
    printf("\n Enter the elements of the matrix ");

        for ( i = 0; i < row; i++){
            for ( j = 0; j < col; j++){
                scanf("%d", &mat[i][j]);
            }
        }
    }else{
        printf("\n Please check the size values ");

    
    }

    printf("\n Your Matrix is: ");
    for ( i = 0; i < row; i++){
        printf("\n");
        for ( j = 0; j < col; j++){
            printf("%d\t",mat[i][j]);
        }
    }

    printf("\n The lower Triangular matrix is ");
    for ( i = 0; i < row; i++){
        printf("\n");
        for( j = 0; j < col; j++){
            if ( i>=j){
                printf("%d\t", mat[i][j]);
            }
            else{
                printf("%d\t", 0);
            }
        }
    }
    return 0;
}