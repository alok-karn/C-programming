#include<stdio.h>
int sumOfnum(int arr[], int N){
    int i, sum = 0;
    for ( i = 0; i < N; i++ ){
        sum += arr[i];
    }
    printf("The sum of elements = %d",sum);
}

int main(){
    int N, i;
    printf("\n Enter the size of the array :: ");
    scanf("%d",&N);
    int num[N];
    printf("\n Enter the elements :: ");
    for ( i = 0; i < N; i++){
        scanf("%d",&num[i]);
    }
    sumOfnum(num, N);
    return 0;
    
}