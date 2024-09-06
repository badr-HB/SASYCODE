#include <stdio.h>

int main ()
{
    int T[10]={15,90,48,10,76,79,130,20,34,158};
    int facteur;
    int i;
    int nbr;
    printf("voillez entre la valeur :");
    scanf("%d",&facteur);
    for(i=0;i<10;i++){
        nbr=T[i]*facteur;
    printf("T[%d]=%d\n",i,nbr);
    }
    return 0;
}