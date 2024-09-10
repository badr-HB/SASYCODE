#include <stdio.h>
int counter=0;
int counte=0;

void note_infer_et_sup_12(float note[],int combien)
{
    int i;
    for(i=0;i<combien;i++){
        if(note[i]>=12)
            counter++;
        else
      counte++;}
      printf("%d non valide",counte);
      printf("%d valide ",counter);
      
}
void Sup_a_la_Moyenne(float note[],int combien,float mini_moyenne)
{

    int i;
    for(i=0;i<combien;i++){
        if(note[i]>mini_moyenne)
         printf("%.2f\t",note[i]);
    }
    
}

float Note_Plus_Basse(float note[],int combien)
{
    int i;
    float counter=note[0];
    for(i=0;i<combien;i++){
        if(note[i]<counter)
        counter=note[i];
    }
    return counter;
}
float Note_Plus_Eleve(float note[],int combien)
{
    int i;
    float counter=note[0];
    for(i=0;i<combien;i++){
            if(note[i]>counter)
            counter=note[i];
    }
    return counter;
}
float moyenne(float note[],int combien)
{
    int i;
    float somme=0;
    for(i=0;i<combien;i++){
        somme=somme+note[i];
    }
    return somme/combien;
}

int main()
{
    int c;
    int combien;
    int i;
    printf("combien des etudiants:");
    scanf("%d",&combien);
    float note[combien];

    for(i=0;i<combien;i++){
        printf("l'etudiant %d: ",i+1);
        scanf("%f",&note[i]);
    }
    float mini_moyenne = moyenne(note, combien);
    here:
     printf("\n1.Calculez la moyenne des note: ");
    printf("\n2.Trouvez la note la plus elevee et la plus basse: ");
    printf("\n3.Affichez les notes superieurs a la moyenne: ");
    printf("\n4.Compter le nombre d'etudiants ayant valide est non valide: ");
    printf("\n5.Quitter: ");
    printf("\n");
    printf("votre choix? ");
    scanf("%d",&c);
    switch(c){
        case 1:printf("le moyenne: %.2f\n",moyenne(note,combien));printf("\nPress ENTER to continue . . \n");
    getchar();getchar();goto here;break;
        case 2:printf("le plus elever note %.2f\n",Note_Plus_Eleve(note,combien));
    printf("le plus basse note %.2f\n",Note_Plus_Basse(note,combien));printf("\nPress ENTER to continue . . \n");
    getchar();getchar();goto here;break;
        case 3:printf("les superieures notes sont:\n");Sup_a_la_Moyenne(note,combien,mini_moyenne);printf("\nPress ENTER to continue . . \n");
    getchar();getchar();goto here;break;
    printf("\n");
        case 4:note_infer_et_sup_12(note,combien); printf("\nPress ENTER to continue . . \n");
    getchar();getchar();goto here;break;
    case 5:return 0;
    default:printf("ERROR 404");printf("\nPress ENTER to continue . . \n");
    getchar();getchar();goto here;break; }
    return 0;
}