#include <stdio.h>
#include <stdlib.h>

int main()
{
   int N;
   printf("donner la taille du tableau : ");
   scanf("%d",&N);
   int T[N];
   for(int i=0 ; i<N ; i++){
    scanf("%d",&T[i]);
   }
   int min=T[0];
   for(int i=0 ; i<N ; i++){
    if(min>T[i]){
        min=T[i];
    }
   }
   printf("la plus petit element dans le tableau est : %d",min);


    return 0;
}
