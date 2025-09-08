#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i, j, rest;
    printf("Entrer la taille du tableau : ");
    scanf("%d",&N);
    int T[N];
    for(i=0 ; i<N ; i++){
        scanf("%d",&T[i]);
    }
    for(i=0 ; i<N ;i++){
        for(j=0 ; j<N-i ; j++){
            rest=T[j];
        if (T[j] > T[j + 1]){
            T[j] = T[j+1];
            T[j+1] = rest;
        }
        }
    }
    for(i=0 ; i<N ; i++){
     printf("%d\t",T[i]);
    }


    return 0;
}
