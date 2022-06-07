#include<stdio.h>
#include<math.h>
int main() {
    int x, y, power;
    printf("\nEnter the number: ");
    scanf("%d", &x);
    printf("\nEnter the power: ");
    scanf("%d", &y);
    power = pow(x, y);
    printf("\nThe result of %d^%d = %d", x, y, power);
    return 0;
}