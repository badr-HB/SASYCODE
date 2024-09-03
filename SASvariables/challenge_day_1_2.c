#include <stdio.h>
#include <stdlib.h>

int main()
{
    int C;
    float K;
    printf("donner la temperature:");
    scanf("%d",&C);
    K = C + 273.15;

    printf("%d C on Kelvin %f k ",C,K);

}