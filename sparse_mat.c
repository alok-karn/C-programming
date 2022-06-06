#include<stdio.h>
int main()
{
    int row, col, i, j, count=0;
    printf("\n Enter the row-size of matrix: ");
    scanf("%d", &row);

    printf("\n Enter the column size of matrix: ");
    scanf("%d", &col);

    int mat[row][col];

    printf("\n Enter the matrix elements: \n");
    for ( i = 0; i < row; i++){
        for ( j = 0; j < col; j++){
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\n The matrix is: \n");
    for ( i = 0; i < row; i++){
        printf("\n");
        for ( j = 0; j < col; j++){
            printf("%d\t", mat[i][j]);
        }
    }

    for ( i = 0; i < row; i++){
        for ( j = 0; j < col; j++){
            if (mat[i][j] == 0);
            ++count;
        }
    }

    if ( count > ((row * col) / 2)){
        printf("\n Matrix is a sparse Matrix \n");
    }else{
        printf("\n Matrix is not a sparse Matrix \n");
    }

    return 0;
}
