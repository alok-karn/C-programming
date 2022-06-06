#include<stdio.h>
float tollfare(char veh, char type){
    float rate;
    if( veh == 'C' || veh == 'c' && type == 'S' || type == 's'){
        rate = 55;
    }else if( veh == 'C' || veh == 'c' && type == 'M' || type == 'm'){
        rate = 85;
    }else if( veh == 'B' || veh == 'b' && type == 'S' || type == 's'){
        rate = 85;
    }else if( veh == 'B' || veh == 'b' && type == 'M' || type == 'm'){
        rate = 125;
    
    }else if( veh == 'L' || veh == 'l' && type == 'S' || type == 's'){
        rate = 170;
    }else if( veh == 'L' || veh == 'l' && type == 'M' || type == 'm'){
        rate = 250;
    }else if( veh == 't' && type == 'S' || type == 's'){
        rate = 85;
    }else if( veh == 't' && type == 'M' || type == 'm'){
        rate = 125;
    }else if( veh == 'T' && type == 'S' || type == 's'){
        rate = 250;
    }else if( veh == 'T' && type == 'M' || type == 'm'){
        rate = 380;
    }else{
        rate = 0;
    }
        return rate;
    
}
int main(){
    char v, t;
    float res;
    printf("\n Enter the type of vehicle :: \n");
    scanf(" %c", &v);
    printf("\n Enter the type of trip :: \n");
    scanf(" %c", &t);
    res = tollfare(v, t);
    printf("\n The fare chare for the %c type of vehicle and %c type of trip is :: %f", v, t, res);
    return 0;

}