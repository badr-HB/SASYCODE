#include <stdio.h>

typedef struct{
    char nom[50];
    char prenom[50];
    int age;
}presentation;

int main()
{
    presentation self;
    printf("saissez vos nom: ");
    scanf("%s",&self.nom);
    printf("saissez vos prenom: ");
    scanf("%s",&self.prenom);
    printf("saissez vos age: ");
    scanf("%d",&self.age);
    printf("\n");
    printf("nom:%s\n",self.nom);
    printf("prenom:%s\n",self.prenom);
    printf("age:%d\n",self.age);

}
