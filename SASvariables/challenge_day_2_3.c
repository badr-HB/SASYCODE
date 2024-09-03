#include <stdio.h>
#include <stdlib.h>

int main(){
    int taille;
    int somme=0;
    printf("taille:");
    scanf("%d",&taille);
    int T[taille];
    int i;
    for(i=0;i<taille;i++)
    {
        printf("T[%d]=",i);
        scanf("%d",&T[i]);
    }
    for(i=0;i<taille;i++)
    {
        somme=somme+T[i];
    }
    for(i=0;i<taille;i++)
    printf("T[%d]=%d\n",i,T[i]);
    printf("la somme est %d",somme);
}