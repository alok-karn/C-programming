/* Program to count separately, the number of elements that end with 0 and the elements in        
the array that are divisible by 3. */
#include<stdio.h>
int main(){
    int count=0, flag = 0, i, size;
    printf("\n Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("\n Enter the elements in the array: ");
    for ( i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    for ( i = 0; i < size; i++){
        if ( arr[i] % 10 == 0){
            count++;
        }
        if ( arr[i] % 3 == 0){
        flag++;
    }
    }
        
    printf("\n There are total %d elements that ends with 0",count);
    printf("\n There are total %d elements that are divisible by 3",flag);
    return 0;
}