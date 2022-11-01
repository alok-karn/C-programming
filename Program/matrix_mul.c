#include<stdio.h>
int main(){
    int i, j,k, row1, col1, row2, col2, prod[100][100];
    printf("\n Enter the row of the first matrix: ");
    scanf("%d",&row1);
    printf("\n Enter the column of the first matrix: ");
    scanf("%d",&col1);
    printf("\n Enter the row of the second matrix: ");
    scanf("%d",&row2);
    printf("\n Enter the column of the second matrix: ");
    scanf("%d",&col2);


    if ( col1 == row2){

    int mat1[row1][col1], mat2[row2][col2];
    printf("\n Enter elements into the first matrix\n");
    for(i = 0; i < row1; i++){
        for ( j = 0; j < col1; j++){
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("\n Enter elements into the second matrix\n");
    for(i = 0; i < row2; i++){
        for ( j = 0; j < col2; j++){
            scanf("%d",&mat2[i][j]);
        }
    }

    
    
        for(i = 0; i < row1; i++){
            for ( j = 0; j < col2; j++){
                prod[i][j] = 0;
                for ( k = 0; k < col2; k++){
                    prod[i][j] += mat1[i][k] * mat2[k][j];
                 }
            }
        }
    }
        else{
        printf("\n Please check the rows and columns:");
    }
    

    printf("\nThe resultant matrix is: \n");
    for ( i = 0; i < row1; i++){
        printf("\n");
    for( j = 0; j < col2; j++){
        printf("\t%d",prod[i][j]);
    }
    }

return 0;
}