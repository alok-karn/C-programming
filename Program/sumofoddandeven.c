/* Write a program.to read n numbers into an array and find the sum of all odd numbers and even numbers separately and display. */
#include<stdio.h>
int main()
{
    int index, evsum=0, i, odsum=0;
    printf("\n Enter the size of the array: ");
    scanf("%d",&index);
    int arr[index];
    printf("\n Enter the elements in the array: ");
    for (i = 0; i < index; i++){
        scanf("%d", &arr[i]);
    }
    for ( i = 0; i < index; i++){
        if (arr[i] % 2 == 0){
            evsum = evsum + arr[i];
        }else{
            odsum = odsum + arr[i];
        }
    }
    printf("\n The sum of all even elements of the array is: %d", evsum);
    printf("\n The sum of all odd elements of the array is: %d", odsum);
    
    return 0;

}