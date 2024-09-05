#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[10]={45,19854,815,100,65,651,230,84,203,847};
    int min=T[0];
    for(int i=0;i<10;i++){
        if(T[i]<min)
        min=T[i];
    }
    printf("minimun est %d",min);
    return 0;
}