#include<stdio.h>
int abc(int num){
    int i;
    int fa = 1;
    for( i = 1; i <= num; i++){
        fa = fa * i;
        
    }
    return fa;
}
int main(){
    int x, n, sum = 0, res;
    printf("\nEnter the range: \n");
    scanf("%d",&n);
    
    for (x = 1; x<=n; x++){
    res = abc(x);
    sum += res;
    }

    printf("\nThe sum of the series is: %d", sum);
    return 0;


}