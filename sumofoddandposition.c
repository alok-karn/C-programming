/*Write a program to read n numbers into an array and fund the sum of odd positioned elements and even positioned elements separately and display. */
#include<stdio.h>
int main(){
    int size, odsum=0, esum=0, i;
    printf("\n Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("\n Enter elements in the array: ");
    for ( i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    for ( i = 0; i < size; i++){
        if (i % 2 == 0){
            esum = esum + arr[i];
        }else{
            odsum = odsum + arr[i];
        }
    }
        printf("\n The sum of even positioned elements is: %d", esum);
        printf("\n The sum of odd positioned elements is: %d", odsum);
        return 0;

}