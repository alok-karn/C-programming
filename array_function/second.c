#include<stdio.h>
int sumOfnum(int arr[], int N){
    int i, esum = 0, osum = 0;
    for ( i = 0; i < N; i++ ){
        if ( arr[i] % 2 == 0){
            esum += arr[i];
        } else{
            osum += arr[i];
        }
    }
    printf("The  even sum of elements = %d",esum);
    printf("\nThe odd sum of elements = %d", osum);
}

int main(){
    int N, i;
    printf("\n Enter the size of the array :: ");
    scanf("%d",&N);
    int num[N];
    printf("\n Enter the elements :: \n");
    for ( i = 0; i < N; i++){
        scanf("%d",&num[i]);
    }
    sumOfnum(num, N);
    return 0;
    
}