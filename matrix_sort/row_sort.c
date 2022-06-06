#include<stdio.h>
int main()
{
    int row, col, i, j, k, temp;
    printf("\n Enter the row-size of matrix: ");
    scanf("%d", &row);

    printf("\n Enter the column size of matrix: ");
    scanf("%d", &col);

    int mat[row][col]; 

    printf("\n Enter the elements into the matrix: ");
    for ( i = 0; i < row; i++){
        for ( j = 0; j < col; j++){
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\n Matrix before sorting \n");
    for ( i = 0; i < row; i++){
        printf("\n");
        for ( j = 0; j < col; j++){
            printf("%d\t", mat[i][j]);
        }
    }   

    for ( i = 0; i < row; i++){
        for ( j = 0; j < col; j++){
            for ( k = (j + 1); k < col; k++){
                if ( mat[i][j] > mat[i][k]){
                    temp = mat[i][j];
                    mat[i][j] = mat[i][k];
                    mat[i][k] = temp;
                }

            }

        }
    }

    printf("\n Matrix after sorting \n");
    for ( i = 0; i < row; i++){
        printf("\n");
        for ( j = 0; j < col; j++){
            printf("%d\t", mat[i][j]);
        }
    }
return 0;

}
