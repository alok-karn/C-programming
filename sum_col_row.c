#include <stdio.h>
void main(){
int size_r,size_c;
        printf("Please enter the sizes of the array\n");
        scanf("%d %d",&size_r,&size_c);
    int arr[size_r][size_c];
    printf("Enter the elements of the array\n");



for(int i=0;i<size_r;i++){
    for(int j=0;j<size_c;j++){
    scanf("%d",&arr[i][j]);
}
}


int sum=0;
for(int i=0;i<size_r;i++){
    sum=0;
    for(int j=0;j<size_c;j++){
    sum+=arr[i][j];
}
printf("the sum of elents in row-%d is %d\n",i+1,sum);
}


for(int i=0;i<size_r;i++){
    sum=0;
    for(int j=0;j<size_c;j++){
    sum += arr[j][i];
}
printf("the sum of elents in column-%d is %d\n",i+1,sum);
}
}