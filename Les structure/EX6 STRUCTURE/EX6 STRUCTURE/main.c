#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nom[20];
    float prix;
    int quantite;
}produit;
int main(){
    produit pro[100];
    int nb_produit;
    printf("Entrer le nombre des produit y a il :");
    scanf("%d",&nb_produit);
    for(int i=0 ; i<nb_produit ; i++){
        printf("le produit %d : \n",i+1);
        printf("Entrer le nom : ");
        scanf("%s",pro[i].nom);
        printf("Entrer le prix : ");
        scanf("%f",&pro[i].prix);
        printf("Entrer la quantitee de produit : ");
        scanf("%d",&pro[i].quantite);

    }
    printf("les produits enregistrer est : \n");
   for(int i=0 ; i<nb_produit ; i++){
    printf("le produit %d : le nom de produit est %s le prix = %.2f dh/unitee , il se trouve %d pieces dans le stock .\n",i+1,pro[i].nom,pro[i].prix,pro[i].quantite);
   }
 return 0;
}
