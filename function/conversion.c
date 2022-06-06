/* Write a program to read a decimal number x, convert it into an octal number or octal number or binary depending on the option given by the user.
(Use switch case and functions) */
#include<stdio.h>
int oct(int num){
      int oct_num = 0, i = 1;

    while (num != 0)
    {
        oct_num += (num % 8) * i;
        num /= 8;
        i *= 10;
    }

    return oct_num;
}

long long convert(int num) {
  long long bin_num = 0;
  int rem, i = 1;

  while (num!=0) {
    rem = num % 2;
    num /= 2;
    bin_num += rem * i;
    i *= 10;
  }

  return bin_num;
}

int main(){
    char ch;
    int dec;
    int octal;
    long long int binary;
    printf("\n Enter the decimal number ::");
    scanf("%d", &dec);
    printf("\n Enter the choice 'O'-for octal and 'B' for binary:: ");
    scanf(" %c", &ch);
    switch(ch){
        case 'o':
        case 'O':
           octal = oct(dec);
            printf("\nThe octal converted value is :: %d", octal);
        break;

        case 'b':
        case 'B':
            binary = convert(dec);
            printf("\nThe binary converted value is :: %d", binary);
        break;
    default:
    printf("\n Please enter the valid choice :: ");
    }
}