#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf(" Entrer le nombre des elements :");
    scanf("%d",&n);
    int T[n];
    for(int i=0 ;i<n ;i++){
        printf("Entrez l'element %d : ", i + 1);
        scanf("%d", &T[i]);
    }
    printf("Voici les elements que vous avez saisis :\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d : %d\n", i + 1, T[i]);
    }
    if (n <= 0) {
    printf("le nombre d elemen doit etre superieur a 0");
    return 1;
}

    return 0;
}
