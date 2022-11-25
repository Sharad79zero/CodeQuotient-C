#include<stdio.h>

int main(){
    float DinCentimeter,DinKilometer,DinMeter;
    scanf("%f",&DinCentimeter);
    
    DinMeter=DinCentimeter/100;
    DinKilometer=DinCentimeter/100000;

    printf("%0.2f %0.2f",DinMeter,DinKilometer);
}

