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
   int max=T[0];
   for(int i=0 ; i<N ; i++){
    if(max<T[i]){
        max=T[i];
    }
   }
   printf("la plus grad element est : %d",max);


    return 0;
}
