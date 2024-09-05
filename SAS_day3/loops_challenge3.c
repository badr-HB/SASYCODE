#include <stdio.h>

//this code hasn't finished yet
int main()
{
    int n;
    int premier;
    printf("entrer votre nombre:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
    if(n%i==0)
       printf("%d\t",i);}    
}