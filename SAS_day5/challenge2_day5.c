#include <stdio.h>
#include <string.h>

int main()
{
    char N[100];
    int s=0;
    int i=0;
    printf("write something:");
    scanf("%s",&N); 
    do{
    s++;
    i++;
    }while(N[i]!='\0');
    printf("%d",s);
}