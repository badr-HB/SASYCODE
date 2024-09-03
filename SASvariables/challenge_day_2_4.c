#include <stdio.h>
#include <stdlib.h>

int main()
{
    int max=0;
    int T[]={120,56,90,75,30,0,987,3,647,15};
    int i;
    for(i=0;i<10;i++){
        if(T[i]>max)
        max=T[i];
    }
    printf("max=%d",max);
}