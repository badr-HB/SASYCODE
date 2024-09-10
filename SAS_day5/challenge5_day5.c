#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    printf("put : ");
    scanf("%s",&a);
    strrev(a);
    printf("%s",a);
}