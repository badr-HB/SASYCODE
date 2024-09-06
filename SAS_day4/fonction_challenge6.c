#include <stdio.h>

int fibonacci(int fib)
{
    if(fib<2)
    return fib;
    else
    return fibonacci(fib-1)+(fib-2);
}

int main()
{
    int fib;
     printf("entrer le nombre:");
     scanf("%d",&fib);
     for(int i=0;i<fib;i++)
     printf("%d\t",fibonacci(i));
}