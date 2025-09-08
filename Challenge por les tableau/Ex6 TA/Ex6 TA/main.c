#include <stdio.h>
#include <stdlib.h>

int main()
{
   int N;
   printf("Entrer la taille du tableau");
   scanf("%d",&N);
   int T[N];
   for(int i=0 ; i<N ; i++){
    scanf("%d",&T[i]);
   }
   int fact , r;
   printf("Entrer un facteur ");
   scanf("%d",&fact);
   for(int i=0 ; i<N ; i++){
    r = fact * T[i];
   printf("les resultat du calcule est : %d\n",r);
   }

    return 0;
}
