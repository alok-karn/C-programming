/* Write a program to read n numbers into an array and find the sum of all odd numbers and display the results. */
#include<stdio.h>
int main()
{
    int index, sum=0, i;
    printf("\n Enter the size of the array: ");
    scanf("%d",&index);
    int arr[index];
    printf("\n Enter the elements in the array: ");
    for (i = 0; i < index; i++){
        scanf("%d", &arr[i]);
    }
    for ( i = 0; i < index; i++){
        if (arr[i] % 2 != 0){
            sum = sum + arr[i];
        }
    }
    printf("\n The sum of odd elements of the array is: %d", sum);
    return 0;

}