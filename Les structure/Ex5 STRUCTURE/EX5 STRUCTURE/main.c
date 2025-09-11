#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    char titre[50];
    char auteur[50];
    long annee;
}livre;
livre liv_ini(){
    livre li;
    printf("Entrer le titre de livre : ");
    gets(li.titre);
    printf("Entrer l auteur de ce livre : ");
    gets(li.auteur);
    printf("Entrer l annee de production : ");
    scanf("%d",&li.annee);
    return li;
}

int main()
{
 livre mon_livre=liv_ini();
 printf("le livre %s est creer par %s en %ld .",mon_livre.titre ,mon_livre.auteur ,mon_livre.annee);
 return 0;
}
