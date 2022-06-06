#include<stdio.h>
#include<math.h>
float fact(int num){
    int i;
    float fa = 1;
    for( i = 1; i <= num; i++){
        fa = fa * i;
        
    }
    return fa;
}
float ser(int num, int n){
    int i;
    float sum=0;
    
    for( i = 1; i <= n; i++){
        int val = i + 1;
        float res = fact(val);
        sum = sum + (pow(num, i) / res);
    }
    return sum;

}
int main(){
    int numb, rang;
    float res;
    printf("\n Enter the number: ");
    scanf("%d", &numb);
    printf("\n Enter the range: ");
    scanf("%d", &rang);
    res = ser(numb, rang);
    printf("\n The sum of the series is: %f", res);
    return 0;
}