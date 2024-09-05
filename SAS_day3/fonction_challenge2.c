#include <stdio.h>

int produit(int a,int b)
{
    return a*b;
}
int main()
{
    int a,b;
    printf("a est b:");
    scanf("%d%d",&a,&b);
    printf("results:%d",produit(a,b));
}