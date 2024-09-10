#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nom[50];
    char prenom[50];
    int note[20];
} Etudiant_Info;


int main()
{
    Etudiant_Info etudiant[50];
    int s;
    int m;
    printf("how many student ");
    scanf("%d",&s);
    printf("how many marks you may add: ");
       scanf("%d",&m);
    for(int i=0;i<s;i++){
    printf("type first name of the student: ");
       scanf("%s",&etudiant[i].prenom);
    printf("type sencond name of the student: ");
       scanf("%s",&etudiant[i].nom);
                   for(int j=0;j<m;j++){
    printf("type student marks: ");
       scanf("%d",&etudiant[i].note[j]);}
    }
    
    
    for(int i=0;i<s;i++){
            printf("\nfirst name: %s",etudiant[i].prenom);
            printf("\nsecond name: %s",etudiant[i].nom);
                        for(int j=0;j<m;j++){
            printf("\nmarks %d\t",etudiant[i].note[j]);}
    }
   
    
    return 0;
}