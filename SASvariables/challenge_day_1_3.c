#include <stdio.h>
#include <stdlib.h>

int main() {
    float kilo;
    float yard;
    printf("entrer la distance en kilometre:");
    scanf("%f",&kilo);
    yard = kilo * 1093.61;
    printf("distance on kilometre %.2f est on yard %.2f",kilo,yard);
    return 0;
}