#include <stdio.h>
void nouvelle_quantite()
{
    int nq;
    int change;
    printf("voillez saissez une nouvelle quantite:");
    scanf("%d",&nq);
}
void les_choix()
{

    printf("1=Ajouter_un_Livre_au_Stock \n");
    printf("2=Mettre_a_Jour_la_Quantite_dun_Livre \n");
    printf("3=Supprimer_un_Livre_du_Stock \n");
    printf("4=Afficher_le_Nombre_Total_de_Livres_en_Stock \n");
}
typedef struct {
    char Titre_du_livre[50];
    char Auteur_du_livre[50];
    float Prix_du_livre;
    int Quantite_en_stock;
}Ajouter_un_Livre_au_Stock;

void livre()
{
    Ajouter_un_Livre_au_Stock livre[50];
    printf("Titre du livre :");
    scanf("%s",&livre[0].Titre_du_livre);
    printf("Auteur du livre :");
    scanf("%s",&livre[0].Auteur_du_livre);
    printf("Prix du livre :");
    scanf("%f",&livre[0].Prix_du_livre);
    printf("Quantite en stock :");
    scanf("%d",&livre[0].Quantite_en_stock);
    //affichage:
    printf("\n\n");
    printf("Titre du livre %s",livre[0].Titre_du_livre);
    printf("\n");
    printf("Auteur du livre %s",livre[0].Auteur_du_livre);
    printf("\n");
    printf("Prix du livre %.2f",livre[0].Prix_du_livre);
    printf("\n");
    printf("Quantite en stock %d",livre[0].Quantite_en_stock);
    printf("\n");
}
int main()
{
    les_choix();
    int C;
    do{
    printf("votre choix? ");
    scanf("%d",&C);
    }while(C>4||C<1);
    switch(C){
        case 1:livre();break;
    }
}