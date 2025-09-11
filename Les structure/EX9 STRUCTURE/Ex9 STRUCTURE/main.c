#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    float solde ;
    char nom[20];
}compte;
void ajouter(compte co){
  printf("Entrer votre nom : ");
  scanf("%s",co.nom);
  printf("Enter votre solde : ");
  scanf("%f",&co.solde);
  float nsold ;
  printf("Entrer le mantant ajouter : ");
  scanf("%f",&nsold);
  printf("Le solde ajouter est : %.2f\n",nsold);
  nsold = nsold + co.solde;
  printf("Nom : %s\n",co.nom);
  printf("Le premier sold est :%.2f\n",co.solde);
  printf("Le solde sera est : %.2f\n",nsold);

}
int main()
{
    compte co;
    ajouter(co);
    return 0;
}
