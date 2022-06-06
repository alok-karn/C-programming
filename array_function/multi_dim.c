#include<stdio.h>
int sumOfnum(int arr[100][100], int M, int N){
    int i, j;
    for (i=0; i<M; i++){
        printf("\n");
        for (j=0; j<N; j++){
            printf("%d\t",arr[i][j]);
        }
    }
}

int main(){
    int N, M, i, j;
    printf("\n Enter the row of the array :: ");
    scanf("%d",&M);
    printf("\n Enter the column of the array :: ");
    scanf("%d",&N);
    int num[M][N];
    printf("\n Enter the elements :: \n");
    for ( i = 0; i < M; i++){
        for ( j = 0; j < N; j++){
            scanf("%d",&num[i][j]);
        }
        
    }
    sumOfnum(num, M, N);
    return 0;
    
}