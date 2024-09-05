#include <stdio.h>
int somme(int a,int b)
{
    return a+b;
}

int main()
{
    int a,b;
    printf("saissez a et b");
    scanf("%d%d",&a,&b);
    printf("total : %d",somme(a,b));

}