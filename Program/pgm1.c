/* Try different ways of initializing the array and make a note of the observation you make.
 (Initialization will NOT be taught separately in theory session)
ex: int a[3]={1,2,3};  int a[3]={1,2}    int a[3]={1};      int a[]={1};      int a[]={1,2,3} ; …….etc */

#include<stdio.h>
int main()
{
    int a[3] = {1, 2, 3}, i;
    printf("\n The elements are: ");
    for(i=0; i < 3; i++){
        printf("%d", a[i]);
    }
    return 0;
}
