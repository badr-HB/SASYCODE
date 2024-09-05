#include <stdio.h>

void maximum(int a,int b)
{
    if(a<b)
    printf("%d is min",a);
    else if(a>b)
    printf("%d is min",b);
    else if(a==b)
    printf("both are equal");
    else
    printf("not found");
}
int main()
{
    int a,b;
    printf("saisse a est b:");
    scanf("%d%d",&a,&b);
    maximum(a,b);
}