#include<stdio.h>
int main()
{
    int i, j, size;
    printf("\n Enter the size of an array: ");
    scanf("%d", &size);

    int arr[size], count[size];
    printf("\n Enter the elements in the array: ");
    for ( i = 0; i < size; i++){
        scanf("%d", &arr[i]);

        count[i] = 0;
    }

    for ( i = 0; i < size; i++){
        for ( j =0; j < size; j++){
            if ( arr[i] == arr[j]){
                count[i] = count[i] + 1;
            }
        }
    }
    printf("\n The occurance are: \n");
    for (i = 0; i < size; i++){
        printf("%d occured %d time in an array \n", arr[i], count[i]);
        break;
    }
    return 0;
    

}