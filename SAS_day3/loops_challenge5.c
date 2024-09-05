#include <stdio.h>

int main()
{
    int nbr=0;
    int n=0;
    int i;
    printf("saissez un nombre :");
    scanf("%d",&nbr);
    for(i=1;i<=nbr;i++){
    n=n+i;
    printf("%d + \n",i);}
    printf("total = %d",n);
}