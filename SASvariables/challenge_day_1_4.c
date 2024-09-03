#include <stdio.h>
#include <stdlib.h>
int main(){

    float km;
    float m;
    printf("la vitesse par km/h");
    scanf("%f",&km);
    m = km * 0.27778;
    printf("le vitesse par m/s %f",m);
    return 0;
}