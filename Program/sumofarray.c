#include<stdio.h>
int main()
{
    int arr[100], sum=0,n;
    printf("\n Enter the size: ");
    scanf("%d",&n);
    printf("\n Enter array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",arr[i]);
        sum += arr[i];

    }
    printf("\n The sum is %d",sum);
    return 0;
    
}