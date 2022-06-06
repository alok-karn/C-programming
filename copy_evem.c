#include<stdio.h>
int main(){
    int size, i;
    printf("\n Enter the size of an array: ");
    scanf("%d", &size);
    int arr[size];
    int count=0;
    int even[count];
    printf("\n Enter the elements into the array: ");
    for (i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("\n Your array is: ");
    for ( i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    
    
    for ( i = 0; i < size; i++){
        if ( arr[i] % 2 == 0){
            even[count] = arr[i];
            count++;
        }
    }
    
    printf("\n The even elements from your array are: ");
    for( i = 0; i < count; i++){
        printf("%d\t", even[i]);
    }

    return 0;
}