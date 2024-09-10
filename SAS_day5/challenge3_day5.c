#include <stdio.h>
#include <string.h>

int main()
{
    char c[100];
    char h[100];
    printf("write smth:");
    scanf("%s",&c);
    printf("write smth:");
    scanf("%s",&h);
    strcat(c,h);
    printf("%s",c);

}