#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct personne{
  char nom[30];
  char prenom[30];
  int age;

} ;
int main()
{
   struct personne p;
   printf("Entrer le nom du personne : ");
   gets(p.nom);
   printf("Entrer le prenom du personne : ");
   gets(p.prenom);
   printf("Donner l age du personne : ");
   scanf("%d",&p.age);
   printf("le nom du personne est : %s\n",p.nom);
   printf("le prenom du personne est : %s\n",p.prenom);
   printf("L age du personne est : %d\n",p.age);


    return 0;
}
