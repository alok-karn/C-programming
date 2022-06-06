#include<stdio.h>
int main(){
    int a, b;
    char c; 
    printf("\n Enter: \n");
    scanf("%d%d %c", &a, &b, &c);
    printf("\n %d %d%c", a, b, c); 
    
    int x = 1, y = 2, z = 3;
    printf("\n Enter again:");
    scanf("%d%*d%d", &x, &y, &z); //this takes the input but won't store it in the y variable.
    printf("x=%d\t y=%d\t",x, y);

    float e=2.1;
    scanf("%5.2f",&e); //this set the limit to width of 5 and precision of 2 decimal place.
    printf("%5.2f",e); 
    
     int i, j;
    scanf("%2d %3d", &i, &j); // assigning the width of the input to be taken.


    printf("a=%d\tb=%d", i,j);


    scanf("%3d%4d", &a, &b); // assigning the width limit for a upto 3 place and for b upto 4 place.

    printf("a=%d\tb=%d", a,b);

    
    
    
    return 0;
}