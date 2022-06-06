#include<stdio.h>
int check(char ch, char type){
    float rate = 0;
    switch (ch)
    {
    case 'B':
    case 'b':
        if ( type == 'S' || type == 's'){
            rate = 85;
            
        }else if( type == 'M' || type == 'm'){
            rate = 120;
        }
        break;
    case 'L':
    case 'l':
        if (type == 'S' || type == 's'){
            rate = 125;
        }else if ( type == 'M' || type == 'm'){
            rate = 280;
        }
    break;
    default:
        printf("\n Please check the values :: ");
        break;
    }

    return rate;
}
int main(){
    float res;
    char v, t;
    printf("\n Enter the type of vehicles :: ");
    scanf(" %c", &v);
    printf("\n Enter the type of trasportation :: ");
    scanf(" %c", &t);

    res = check(v, t);

    printf("\n The %c type of vehicles and the %c mode of transportation has %f fare charge", v, t, res);

    return 0;

}