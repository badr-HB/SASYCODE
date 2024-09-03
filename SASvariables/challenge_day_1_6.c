#include <stdio.h>
#include <stdlib.h>

int main(){
    float a;
    float b;
    float somme,substraction,multiplication,division;

    printf("a:");
    scanf("%f",&a);
    printf("b");
    scanf("%f",&b);
    somme=a+b;
    substraction=a-b;
    multiplication=a*b;
    division=a/b;
    printf("somme=%.2f\nsubstraction=%.2f\nmultiplication=%.2f\ndivision=%.2f\n",somme,substraction,multiplication,division);
    return 0;
}