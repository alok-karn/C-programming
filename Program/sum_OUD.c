#include<stdio.h>
int main()
{
    int i, j, row, col, sum=0;

    printf("\n Enter the row of first matrix: ");
    scanf("%d",&row);
    printf("\n Enter the column of first matrix: ");
    scanf("%d",&col);
   
   int mat[row][col];

   printf("\n Enter the elements into the matrix:\n");
   for( i = 0; i < row; i++){
       for( j = 0; j < col; j++){
           scanf("%d",&mat[i][j]);
       }
   }

   printf("\n The matrix is: ");
   for( i = 0; i < row; i++){
       printf("\n");
       for( j = 0; j < col; j++){
           printf("%d\t",mat[i][j]);
       }
   }


   if ( row == col){
       for( i = 0; i < row; i++){
           for ( j = 0; j < col; j++){
               if(i<=j && i != j)
               sum += mat[i][j];
           }
       }
   
   printf("\n The sum of upper diagonal elements is: %d",sum);
   }
   else{
       printf("\n The sum is not possible, please check the row and column ");
   }

return 0;
}