#include <stdio.h>
#include <stdlib.h>

int main(){
    int C;
    printf("entrer la temperature:");
    scanf("%d",&C);
    if(C<0)
    printf("solid");
    else if(0<=C && C<100)
    printf("liquide");
    else if (C>100)
    {
    printf("GAZ");
    }
    else
    printf("ERROR");
}