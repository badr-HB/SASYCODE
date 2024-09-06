#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[10];
    int nombre;
    int i;
    int f;
    printf("saissez vos nombre:");
    scanf("%d",&nombre);
    for(i=10;i>0;i--){
        printf("%d*%d=%d\n",i,nombre,i*nombre);
    }
}