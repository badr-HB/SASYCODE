#include <stdio.h>
#include <string.h>

int main()
{
    char lowercase[50];
    int i;
    printf("your phrase or whatever: ");
    scanf("%s",&lowercase);
    int lire=(strlen(lowercase));
    for(i=0;i<lire;i++){
        if(lowercase[i]>=97 || lowercase[i]<=122){
        lowercase[i]=lowercase[i]-32;
        }
    }printf("%s",&lowercase);
}