#include<stdio.h>
int main()
{
    int n, i, flag=0, key;
    printf("\n Enter the size: ");
    scanf("%d",&n);
    int arr[n];
    printf("\n Enter the array element: ");
    for (i = 0; i<n; i++){
        scanf("%d", &arr[i]);

    }
    printf("\n Enter the key element you want to search for: ");
    scanf("%d", &key);
    
    for(i=0; i<n; i++){
        if (key == arr[i]){
            flag++;
            break;
        }
    }
    if (flag == 1){
        printf("\n The position is %d", i + 1);
    }
    else 
    printf("\n No elements found: ");

    int count = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] == key)
            count++;
    }
    printf("\n%d occured %d times in an array\n", key, count);
    return 0;
}