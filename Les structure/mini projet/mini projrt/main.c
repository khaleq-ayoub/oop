#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char code[60];
    char nom[50];
    int credit;
    float note[200];
}cours;
typedef struct{
    int ID;
    char nom[30];
    char prenom[30];
    int age;
    float moyenne;
    cours co;
}etudiant ;
void information(){
    etudiant e[100];
    int nb_etudiant;
    int nb_cours;



    for(int i=0 ; i<nb_etudiant ; i++){
        printf("les information de l etudiant %d" ,i+1);
        printf("Entrer votre id : ");
        scanf("%d",e[i].ID);
        printf("Entrer votre nom : ");
        scanf("%s",e[i].nom);
         printf("Entrer votre prenom : ");
        scanf("%s",e[i].prenom);
         printf("Entrer votre age : ");
        scanf("%d",e[i].age);
    for(int j=0 ;j<nb_cours ;j++){
        printf("le nom de cour est :");
        gets(e[j].co.nom);
        printf("le code de cours est : ");
        gets(e[j].co.code);
        printf("le credit est :");
        scanf("%d",e[j].co.credit);
        printf("la note obtenir dans ce cours est :");
        scanf("%f",e[j].co.note[j]);
      e[i].moyenne = e[j].co.note[j]/j;
    }

  }


}
int main()
{
    int i ;
    int nb_etudiant;
    int nb_cours;
    printf("Enter le nombre d'etudiant : ");
    scanf("%d",nb_etudiant);
    printf("Enter le nombre de cours : ");
    scanf("%d",nb_cours);
    for(int i=0 ;i<nb)
    printf("les information de l etudaint ")

    return 0;
}
