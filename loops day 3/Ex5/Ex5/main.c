#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N , som = 0;
    printf("Entrer un nombre : ");
    scanf("%d",&N);
    for(int i=1 ; i<=N ; i++){
        som+=i;
    }
    printf("la somme du nombre est : %d ",som);
    return 0;
}
