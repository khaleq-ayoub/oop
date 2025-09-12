#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
    char code[60];
    char nom[50];
    int credit;
    float note;
}cours;
typedef struct{
    int ID;
    char nom[30];
    char prenom[30];
    int age;
    float moyenne;
    cours co[10];
}etudiant ;
void information( etudiant e[] , int nb_etudiant , int nb_cours){

    int som=0;


    for(int i=0 ; i<nb_etudiant ; i++){
        printf("les information de l etudiant %d" ,i+1);
        printf("Entrer votre id : ");
        scanf("%d",&e[i].ID);
        printf("Entrer votre nom : ");
        scanf("%s",e[i].nom);
         printf("Entrer votre prenom : ");
        scanf("%s",e[i].prenom);
         printf("Entrer votre age : ");
        scanf("%d",&e[i].age);
    for(int j=0 ;j<nb_cours ;j++){
        printf("le nom de cour est :");
        scanf("%s",e[i].co[j].nom);
        printf("le code de cours est : ");
        scanf("%s",e[i].co[j].code);
        printf("le credit est :");
        scanf("%d",&e[i].co[j].credit);
        printf("la note obtenir dans ce cours est :");
        scanf("%f",&e[i].co[j].note);
        som += e[i].co[j].note;
    }
        e[i].moyenne = som / nb_cours;
  }




}
int main()
{
    etudiant e[100];
    int i ;
    int nb_etudiant;
    int nb_cours;
    printf("Enter le nombre d'etudiant : ");
    scanf("%d",&nb_etudiant);
    printf("Enter le nombre de cours : ");
    scanf("%d",&nb_cours);
    for(int i=0 ;i<nb_etudiant ;i++){
       for(int j=0 ;j<nb_cours ;j++){
    printf("les information de l etudaint \n");
    printf("les information de l'etudiant %d :ID : %d \tNom complet: %s,%s age= %d ans . Le nom de cours %d est %s son code est %s avec nombre de credit egal a %d , j ais obtenue la note %.2f dans ce cours  ",i+1,e[i].ID,e[i].nom,e[i].prenom,e[i].age,j+1,e[i].co[j].nom,e[i].co[j].code,e[i].co[j].credit,e[i].co[j].note);
    printf("la moyenne des notes est ;%.2f ", e[i].moyenne );
       }
    }
    return 0;
}
