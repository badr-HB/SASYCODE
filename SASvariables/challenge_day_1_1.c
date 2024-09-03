#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int age;
    char adresse_email[50];
    char nom[50], prenom[50], sexe[20];

    printf("votre nom:");
    scanf("%s",&nom);
    printf("votre prenom:");
    scanf("%s",&prenom);
    printf("votre age:");
    scanf("%d",&age);
    printf("votre sexe:");
    scanf("%s",&sexe);
    printf("adresse_email:");
    scanf("%s",&adresse_email);

    printf("nom %s\n",nom);
    printf("prenom %s\n",prenom);
    printf("age %d\n",age);
    printf("sexe %s\n",sexe);
    printf("adresse_email %s\n",adresse_email);

    return 0;
}
