#include<stdio.h>
int main()
{
    int row, col, i, j, tran_mat[100][100];
    printf("\n Enter the row of a matrix \n");
    scanf("%d", &row);
    printf("\n Enter the column of a matrix \n");
    scanf("%d", &col);
    int mat[row][col];
    printf("\n Enter elements into the matrix: \n");
    for ( i = 0; i < row; i++){
        for( j = 0; j < col; j++){
            scanf("%d",&mat[i][j]);
        }
    }

    for ( i = 0; i < row; i++){
        for( j = 0; j < col; j++){
            tran_mat[i][j] = mat[j][i];
        }
    }

    printf("\n The matrix before transfose is: \n");
    for ( i = 0; i < row; i++){
        printf("\n");
        for( j = 0; j < col; j++){
            printf("%d\t",mat[i][j]);
        }
    }

    printf("\n The transposed matrix is: \n");
    for ( i = 0; i < row; i++){
        printf("\n");
        for( j = 0; j < col; j++){
            printf("%d\t",tran_mat[i][j]);
        }
    }




return 0;
}