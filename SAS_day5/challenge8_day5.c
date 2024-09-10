#include <stdio.h>
#include <string.h>

int main()
{
    char uppercase[50];
    int i;
    printf("your phrase or whatever: ");
    scanf("%s",&uppercase);
    int lire=(strlen(uppercase));
    for(i=0;i<lire;i++){
        if(uppercase[i]>=65 || uppercase[i]<=90){
        uppercase[i]=uppercase[i]+32;
        }
    }printf("%s",&uppercase);
}