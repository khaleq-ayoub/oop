#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main() {
    char texte[200];
    int nombre = 0;

    printf("Entrer le texte : ");
    fgets(texte, sizeof(texte), stdin);
    texte[strcspn(texte, "\n")] = '\0';

     char *mot = strtok(texte, " \t\n");//le strtok necessaire d'etuliser le pointeur
    if (mot != NULL) {
    nombre++;
    }
     while ((mot = strtok(NULL, " \t\n")) != NULL) {
    nombre++;
   }

    printf("Le nombre  dee mots qui on a dans le texte est  : %d\n", nombre);

    return 0;
}
