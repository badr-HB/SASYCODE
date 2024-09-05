#include <stdio.h>

int main()
{
    int inverse=0;
    int N;
    printf("donnez pour le inverser:");
    scanf("%d",&N);
    do{
          inverse=(inverse*10)+(N%10);
          N=N/10;

    }while(N!=0);
    printf("%d",inverse);
}