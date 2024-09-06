#include <stdio.h>
#include <stdlib.h>

int main(){
    int T[10]={41,50,97,324,48,11,02,984,17,64};
    int i,j;
    int R;

    for(i=0;i<10;i++){
        for(j=0;j<i;j++){
        if(T[i]<T[j]){
            R=T[j];
            T[j]=T[i];
            T[i]=R;
        }
      }
    }

    for(j=0;j<10;j++)
    printf("T[%d]=%d\n",j,T[j]);

}