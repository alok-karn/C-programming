#include<stdio.h>
int main()
{
    int size, i, j, count;
    printf("\n Enter the size of an array: ");
    scanf("%d", &size);

    int arr[size], occur[size];
    printf("\n Enter the elements in an array: ");
    for (i = 0; i < size; i++){
        scanf("%d", &arr[size]);
        occur[i] = -1;
    }
    for (i = 0; i < size; i++){
        count = 1;
        for( j = i + 1; j < size; j++){
            if (arr[i] == arr[j]){
                count++;
                occur[j] = 0;
            }
        }
        if (occur[i] != 0){
        occur[i] = count;
        
    }
    }
    printf("\n Number of Occurance of each elements in the array is: \n");
    for (i = 0; i < size; i++){
        if (occur[i] != 0)
        {
            printf("%d Occured %d times in the array\n", arr[i], occur[i]);

        }
    }
    
return 0;


}