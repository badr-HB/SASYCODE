#include <stdio.h>
#include <string.h>

int main()
{
    int counter=0;
    int i;
    char a[50];
    char c;

    printf("put character: ");
    scanf(" %c",&c);
    printf("put string: ");
    scanf("%s",a);

    for(i=0;a[i]!='\0';i++)
    if(a[i]==c){
    counter++;
    }
    printf("%d",counter);
    
    
}