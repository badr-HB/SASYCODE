#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    char ENG[]="english";
    char INFO[]="informatique";
    char SC[]="science";
    char LIT[]="litterature";
    char ECO[]="economique";

int ajoute;
int i,j;

typedef struct{
    int day[50];
    int month[50];
    int year[50];
}annee;

typedef struct{
    char Nom[50];
    char Prenom[50];
    char Departement[200];
    float Note_generale[50];
}Ajouter_un_etudiant;


Ajouter_un_etudiant etudiant_info[100];
annee Year;



void affichage(int ajoute,Ajouter_un_etudiant etudiant_info[],annee Year){
    

     for(i=1;i<=ajoute;i++){
        printf("\nID: %d\n",i);

        printf("nom d'etudiant: %s\n",etudiant_info[i].Nom);

        printf("prenom d'etudiant: %s\n",etudiant_info[i].Prenom);

        printf("la date de naissance: %d/%d/%d\n",Year.day[i],Year.month[i],Year.year[i]);
        
        if(strcmp(etudiant_info[i].Departement,ENG)==0){
        printf("etudiant departement:%s\n",etudiant_info[i].Departement);
    }
    else if(strcmp(etudiant_info[i].Departement,INFO)==0){
        printf("etudiant departement:%s\n",etudiant_info[i].Departement);
    }
    else if(strcmp(etudiant_info[i].Departement,SC)==0){
        printf("etudiant departement:%s\n",etudiant_info[i].Departement);
    }
    else if(strcmp(etudiant_info[i].Departement,LIT)==0){
        printf("etudiant departement:%s\n",etudiant_info[i].Departement);
    }
    else if(strcmp(etudiant_info[i].Departement,ECO)==0){
        printf("etudiant departement:%s\n",etudiant_info[i].Departement);
    }
    

        printf("note general: %.2f\n",etudiant_info[i].Note_generale[i]);

        }
}
void choix1(){
    printf("\nenglish\n");
   printf ("informatique\n");
   printf ("science\n");
   printf ("litterature\n");
   printf ("economique\n");

}

void Modification_Des_Valeur(Ajouter_un_etudiant etudiant_info[],int ajoute,annee Year)
{

    
    int T[10];
    int ID;
    printf("tapez ID que vous recherchez: ");
    scanf("%d",&ID);
    for(i=1;i<=ajoute;i++){
    if(ID==i){
        
    printf("saissez le nom d'etudiant: ");
    scanf("%s",&etudiant_info[i].Nom);

    printf("saissez le prenom d'etudiant: ");
    scanf("%s",&etudiant_info[i].Prenom);

   printf("saissez la date de naissance:\n ");
   do{
   printf("jour: ");
   scanf("%d",&Year.day[i]);
   }while(Year.day[i]>30||Year.day[i]<1);
   do{
   printf("mois: ");
   scanf("%d",&Year.month[i]);
   }while(Year.month[i]>12||Year.month[i]<1);
   do{
   printf("annee: ");
   scanf("%d",&Year.year[i]);
   }while(Year.year[i]<1900||Year.year[i]>2006);

    printf("saissez la note general: ") ;
    scanf("%f",&etudiant_info[i].Note_generale[i]);    
    do{
        choix1();
    printf("saissez etudiant departement: ");
    scanf("%s",&etudiant_info[i].Departement);
    }while(strcmp(etudiant_info[i].Departement,ENG)!=0&&strcmp(etudiant_info[i].Departement,INFO)!=0&&strcmp(etudiant_info[i].Departement,SC)!=0&&strcmp(etudiant_info[i].Departement,LIT)!=0&&strcmp(etudiant_info[i].Departement,ECO)!=0);
    }

    }

      affichage(ajoute,etudiant_info,Year);
}
void suppression(int ajoute,Ajouter_un_etudiant etudiant_info[],annee Year)
{
    int ID;
    int i;
    printf("ID d'etudiant vous voulez supprimer: ");
    scanf("%d",&ID);
    for(i=ID-1;i<ajoute;i++){
    strcpy(etudiant_info[i].Nom,etudiant_info[i+1].Nom);
    strcpy(etudiant_info[i].Prenom,etudiant_info[i+1].Prenom);
    strcpy(etudiant_info[i].Departement,etudiant_info[i+1].Departement);
    etudiant_info[i].Note_generale[i]=etudiant_info[i+1].Note_generale[i+1];}
    
    affichage(ajoute,etudiant_info,Year);
}
int main()
{

    Ajouter_un_etudiant etudiant_info[100];
    annee Year;

     printf("comme etudiant vous voulez ajouter: ");
    scanf("%d",&ajoute);
    
    for(i=1;i<=ajoute;i++){
    printf("saissez le nom d'etudiant: ");
    scanf("%s",&etudiant_info[i].Nom);

    printf("saissez le prenom d'etudiant: ");
    scanf("%s",&etudiant_info[i].Prenom);

   printf("saissez la date de naissance:\n ");
   do{
   printf("jour: ");
   scanf("%d",&Year.day[i]);
   }while(Year.day[i]>30||Year.day[i]<1);
   do{
   printf("mois: ");
   scanf("%d",&Year.month[i]);
   }while(Year.month[i]>12||Year.month[i]<1);
   do{
   printf("annee: ");
   scanf("%d",&Year.year[i]);
   }while(Year.year[i]<1900||Year.year[i]>2006);

    printf("saissez la note general: ") ;
    scanf("%f",&etudiant_info[i].Note_generale[i]);
    
    do{
        choix1();
    printf("saissez etudiant departement: ");
    scanf("%s",&etudiant_info[i].Departement);
    }while(strcmp(etudiant_info[i].Departement,ENG)!=0&&strcmp(etudiant_info[i].Departement,INFO)!=0&&strcmp(etudiant_info[i].Departement,SC)!=0&&strcmp(etudiant_info[i].Departement,LIT)!=0&&strcmp(etudiant_info[i].Departement,ECO)!=0);
    
    }
    suppression(ajoute,etudiant_info,Year);
    //affichage(ajoute,etudiant_info,Year);

    
    
}