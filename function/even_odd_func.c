#include<stdio.h>
int chk(int num){
   return (num % 2 == 0);
}

int main(){
    int n;
    printf("\n Enter the number :: ");
    scanf("%d", &n);

    int res = chk(n);

    if (res){
        printf("\n Even");

    }
    else{
        printf("\n Odd");

    }
return 0;
}