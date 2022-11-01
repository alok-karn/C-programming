/* This is a bubble sort algorithm */
#include<stdio.h>
int main()
{
    int i, j, n, temp;
    printf("\n Enter the size: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("\n Enter the element in the array: ");
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(i=0; i<=n-2; i++){
        for(j = 0; j <= n-2-i; j++){
            if (arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("\n The array elements are: ");
    for (i = 0; i < n; i++){
    printf("%d\t", arr[i]);
}

    return 0;
}