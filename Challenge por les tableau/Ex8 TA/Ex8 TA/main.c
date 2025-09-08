#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    printf(" Entrer la taille du tableau : ");
    scanf("%d",&N);
    int T[N];
    for(int i=0 ; i<N ; i++){
        scanf("%d",&T[i]);
    }
    int TS[N];
    for(int i=0 ; i<N ; i++){
        TS[i]=T[i];
    }
    for(int i=0 ; i<N ; i++){
    printf("les resultat est : %d\n",TS[i]);
    }
    return 0;
}
