#include <stdio.h>
#include <string.h>

int main()
{
    char a[50];
    char b[50];
    printf("write smth: ");
    scanf("%s",&a);
    printf("write smth: ");
    scanf("%s",&b);
    if(strcmp(a,b)==0)
    printf("true");
    else
    printf("false");
}