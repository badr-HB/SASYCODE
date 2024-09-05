#include <stdio.h>

int main()
{
int nbr;
int i;
printf("saissez vos nombre:");
scanf("%d",&nbr);
for(i=1;i<=nbr;i++){
if(nbr%i==0)
printf("%d\t",i);}
}