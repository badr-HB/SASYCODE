#include <stdio.h>
#include <stdlib.h>

int main(){

    int T[5];
    for(int i=0;i<5;i++){
        printf("T[%d]=",i);
        scanf("%d",&T[i]);
    }
    
    for(int i=0;i<5;i++)
        printf("T[%d]=%d\n",i,T[i]);
    
    return 0;
    
}