#include <stdio.h>

int main()
{
    int T[10]={14,87,3,90,4,20,15,98,7,10};
    int i;
    for(i=0;i<10;i++)
    {
        int n=T[i];
        if(T[i]%n==0 && T[i]%1==0 )
        printf("%d",T[i]);
    }
}