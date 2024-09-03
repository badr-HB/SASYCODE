#include <stdio.h>
#include <stdlib.h>

int main() {

    int command;
    printf("nombre de commond du client:");
    scanf("%d", &command);
    
   switch (command){

    case 200 ... 300 :
        printf("frais de livraison 5dh");
        break;
    case 100 ... 199 :
    printf("frais de livraison 10dh");
        break;
    default :
    printf("frais de livraison 20dh");
        break;
   }
}

/*if(command>=200&&command<=300)
    printf("frais de livraison 5dh");
    else if(command>=100&&command<=200)
    printf("frais de livraison 10dh");
    else
    printf("frais de livraison 20dh");
    }*/