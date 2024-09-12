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
int idc=1;

typedef struct{
    int id;
    char Nom[50];
    char Prenom[50];
    char Departement[100];
    float Note_generale[50];
    int day;
    int month;
    int year;
}Ajouter_un_etudiant;


Ajouter_un_etudiant etudiant_info[100];

void choix1(){
    printf("\nenglish\n");
   printf ("informatique\n");
   printf ("science\n");
   printf ("litterature\n");
   printf ("economique\n");

}

void Modification_Des_Valeur(Ajouter_un_etudiant etudiant_info[],int ajoute)
{


    int ID;
    printf("tapez ID que vous recherchez: ");
    scanf("%d",&ID);

    for(i=0;i<ajoute;i++){
            if(ID==etudiant_info[i].id){

    printf("saissez le nom d'etudiant: ");
    scanf("%s",&etudiant_info[i].Nom);

    printf("saissez le prenom d'etudiant: ");
    scanf("%s",&etudiant_info[i].Prenom);

   printf("saissez la date de naissance:\n ");
   do{
   printf("jour: ");
   scanf("%d",&etudiant_info[i].day);
   }while(etudiant_info[i].day>30||etudiant_info[i].day<1);
   do{
   printf("mois: ");
   scanf("%d",&etudiant_info[i].month);
   }while(etudiant_info[i].month>12||etudiant_info[i].month<1);
   do{
   printf("annee: ");
   scanf("%d",&etudiant_info[i].year);
   }while(etudiant_info[i].year<1900||etudiant_info[i].year>2006);

    printf("saissez la note general: ") ;
    scanf("%f",&etudiant_info[i].Note_generale);
    do{
        choix1();
    printf("saissez etudiant departement: ");
    scanf("%s",&etudiant_info[i].Departement);
    }while(strcmp(etudiant_info[i].Departement,ENG)!=0&&strcmp(etudiant_info[i].Departement,INFO)!=0&&strcmp(etudiant_info[i].Departement,SC)!=0&&strcmp(etudiant_info[i].Departement,LIT)!=0&&strcmp(etudiant_info[i].Departement,ECO)!=0);
    }

    }


}
void suppression(int ajoute,Ajouter_un_etudiant etudiant_info[])
{

    int ID;
    int i,j;
    printf("ID d'etudiant vous voulez supprimer: ");
    scanf("%d",&ID);

    for(i=0;i<ajoute;i++){
            if(ID==etudiant_info[i].id){
        for(j=i;j<ajoute;j++){
        etudiant_info[j]=etudiant_info[j+1];
        }
        ajoute--;
        }
    }


}


void affichage(int ajoute,Ajouter_un_etudiant etudiant_info[]){
for(i=0;i<ajoute;i++)
{
        printf("IUD: %d\n",etudiant_info[i].id);

        printf("nom d'etudiant: %s\n",etudiant_info[i].Nom);

        printf("prenom d'etudiant: %s\n",etudiant_info[i].Prenom);

        printf("la date de naissance: %d/%d/%d\n",etudiant_info[i].day,etudiant_info[i].month,etudiant_info[i].year);

        if(strcmp(etudiant_info[i].Departement[i],ENG)==0){
        printf("etudiant departement:%s\n",etudiant_info[i].Departement[i]);
    }
    else if(strcmp(etudiant_info[i].Departement[i],INFO)==0){
        printf("etudiant departement:%s\n",etudiant_info[i].Departement[i]);
    }
    else if(strcmp(etudiant_info[i].Departement[i],SC)==0){
        printf("etudiant departement:%s\n",etudiant_info[i].Departement[i]);
    }
    else if(strcmp(etudiant_info[i].Departement[i],LIT)==0){
        printf("etudiant departement:%s\n",etudiant_info[i].Departement[i]);
    }
    else if(strcmp(etudiant_info[i].Departement[i],ECO)==0){
        printf("etudiant departement:%s\n",etudiant_info[i].Departement[i]);
    }


        printf("note general: %.2f\n",etudiant_info[i].Note_generale);

        }


}
void Moyenne_General_Du_Departement(Ajouter_un_etudiant etudiant_info[],int ajoute)
{
    int i;
    int english=0,informatique=0,science=0,litterature=0,economique=0;
    int somme_english=0,somme_informatique=0,somme_science=0,somme_litterature=0,somme_economique=0;
    for(i=0;i<ajoute;i++){
    if(strcmp(etudiant_info[i].Departement[i],"english")==0){
    somme_english+=etudiant_info[i].Note_generale[i];
    english++;
    printf("moyenne de english: %d\n",somme_english);
    }
    else if(strcmp(etudiant_info[i].Departement[i],"informatique")==0){
     somme_informatique+=etudiant_info[i].Note_generale[i];
     informatique++;
        printf("moyenne de informatique: %d\n",somme_informatique);
    }
    else if(strcmp(etudiant_info[i].Departement[i],"science")==0){
      somme_science+=etudiant_info[i].Note_generale[i];
      science++;
        printf("moyenne de science: %d\n",somme_science);
    }
    else if(strcmp(etudiant_info[i].Departement[i],"litterature")==0){
      somme_litterature+=etudiant_info[i].Note_generale[i];
      litterature++;
        printf("moyenne de litterature: %d\n",somme_litterature);
    }
    else if(strcmp(etudiant_info[i].Departement[i],"economique")==0){
        somme_economique+=etudiant_info[i].Note_generale[i];
        economique++;
        printf("moyenne de economique: %d\n",somme_economique);
    }}

}

int main()
{
    int choix;
    here:

    printf("1.ajouter un etudiant\n");
    printf("2.modifier\n");
    printf("3.supprimer\n");
    printf("4.afficher\n");
    printf("5.la moyenne des departements\n");
    printf("votre choix? ");
    scanf("%d",&choix);
    if(choix==1){

        ajoute++;

    for(i=0;i<ajoute;i++){

    etudiant_info[i].id=idc;

    printf("saissez le nom d'etudiant: ");
    scanf("%s",etudiant_info[i].Nom);

    printf("saissez le prenom d'etudiant: ");
    scanf("%s",etudiant_info[i].Prenom);

   printf("saissez la date de naissance:\n ");
   do{
   printf("jour: ");
   scanf("%d",&etudiant_info[i].day);
   }while(etudiant_info[i].day>30||etudiant_info[i].day<1);
   do{
   printf("mois: ");
   scanf("%d",&etudiant_info[i].month);
   }while(etudiant_info[i].month>12||etudiant_info[i].month<1);
   do{
   printf("annee: ");
   scanf("%d",&etudiant_info[i].year);
   }while(etudiant_info[i].year<1900||etudiant_info[i].year>2006);
   do{
    printf("saissez la note general: ") ;
    scanf("%f",&etudiant_info[i].Note_generale);}
    while(etudiant_info[i].Note_generale<0||etudiant_info[i].Note_generale>20);

    do{
        choix1();
    printf("saissez etudiant departement: ");
    scanf("%s",&etudiant_info[i].Departement[i]);
    }while(strcmp(etudiant_info[i].Departement[i],ENG)!=0&&strcmp(etudiant_info[i].Departement[i],INFO)!=0&&strcmp(etudiant_info[i].Departement[i],SC)!=0&&strcmp(etudiant_info[i].Departement[i],LIT)!=0&&strcmp(etudiant_info[i].Departement[i],ECO)!=0);

    idc++;
    }

        goto here;
    }
    else if(choix==2){
    Modification_Des_Valeur(etudiant_info,ajoute);
    goto here;
    }
    else if(choix==3){
    suppression(ajoute,etudiant_info);
    goto here;}
    else if(choix==4){
        affichage(ajoute,etudiant_info);
        goto here;
    }
    else if(choix==5){
        Moyenne_General_Du_Departement(etudiant_info,ajoute);
        goto here;
    }

    else
        return 0;



}