#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct etudiant{
 char nom[20];
 char prenom[20];
 float note[100];
};
int main()
{
    struct etudiant et;
    int nb_note;
    printf("Entrer le nom de l etudiant : ");
    gets(et.nom);
    printf("Entrer le prenom de l etudiant : ");
    gets(et.prenom);
    printf("Entrer le nombre des notes : ");
    scanf("%d",&nb_note);
    for(int i=0 ; i<nb_note; i++){
        printf("Entrer la notes ");
       scanf("%f%",&et.note[i]);
    }
       printf("Les notes de l etudiant %s\t %s est :\n",et.nom ,et.prenom) ;

     for(int i=0 ;i<nb_note ; i++){
        printf("la note %d est: %.1f\n",i+1 ,et.note[i]);
     }
    return 0;
}
