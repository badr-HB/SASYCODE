#include <stdio.h>

int Factorielle(int i,int nombre)
{
    int fois=1;
    for(i=1;i<=nombre;i++)
    fois=fois*i;
    return fois;
}
void affichage(int i,int nombre)
{
    for(i=nombre;i>=1;i--)
    printf("%d*",i);
    printf("\t");
    printf("results:%d",Factorielle(i,nombre));
}

int main()
{
    int nombre;
    int i;
    printf("saissez le nombre:");
    scanf("%d",&nombre);
    affichage(i,nombre);
}