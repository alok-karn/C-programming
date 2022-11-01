#include<stdio.h>
int main(){
    int a,b,c;
    printf("%d", 12345); //this shows the normal output.
    printf("%04d",25); //this defines the width and fills the output with 0 if less than the assigned width.
    printf("%i",1234); //printed the value
    printf("%4.2f",3.14159); //4 defines the width and .2 says to take only 2 decimal values
    printf("%x",255); //this prints the hex values
    printf("%o\n",255); // printed some random values.
    printf("%08.2f",-1.2); // prints the value with 0's to the right with the sign and fills the decimal part with 0 as in statement precision is set to 2 values.
    printf("%0-8.2f",-1.2); //padding is overruled and 0 is filled after the decimal because of the precision.
    printf("%-7.2f\n",23.15); // as it is left jsutified the padding is overrules and space is filled.
    printf("%-+7.2f\n",23.15); // '+' sign is added to the value.
    printf("%+07.2f\n",23.15); //padding is overruled and 0 is filled in the empty part with '+' sign.
    printf("%0+7.2f\n",23.15); //width is assigned upto 7 place and precision is assigned upto 2 decimial place. 
    printf("%-7.2f\n", -23.15); // "-" sign is added and it is left aligned.
    printf("%-+7.2f\n",-23.15); //"-" sign is added to value
    printf("%+07.2f\n",-23.15);//"-" sign with 0 is added to the left of the value.
    printf("%0+7.2f\n",-23.15); //"-" sign with 0 is added to the left of the values.
    printf("%d",printf("cpgm")); // printed the value from inside the printf statement with its total number of characters.
    printf("%d\n",printf("amrita")); //printed the value from the printf statement with its total number of characters.
    printf("%d",(scanf("%d%d",&a,&b))); //it takes two input and print the total number of input taken
    printf("%d",(scanf("%d%d%d", &a, &b, &c))); // it takes three input and print the total number of input taken.
    
    
    return 0;

}