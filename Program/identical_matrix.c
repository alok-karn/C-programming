#include<stdio.h>
int main()
{
    int i, j, row1, col1, row2, col2, count;
    printf("\n Enter the row of the first matrix: ");
    scanf("%d",&row1);
    printf("\n Enter the column of the first matrix: ");
    scanf("%d",&col1);
    printf("\n Enter the row of the second matrix: ");
    scanf("%d",&row2);
    printf("\n Enter the column of the second matrix: ");
    scanf("%d",&col2);

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

    if ( row1 == row2 && col1 == col2){
        printf("\nComparable!");
        for ( i = 0; i < row1; i++)
        {
            for ( j = 0; j < col2; j++)
            {
               if( mat1[i][j] == mat2[i][j] ){
                count = 1;
                break;

            } 
            }
            
        }   
        }else{
            printf("\n Not Comparable!");
        }

        if (count == 1){
            printf("\nThe two matrix are equal! ");
        }else{
            printf("\n Not equal ");
        }

        return 0;
}