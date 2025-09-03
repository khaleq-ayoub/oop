#include <stdio.h>

int main()
{
    int i , N;
    printf("Entrer un nombre \n");
    scanf(" %d " ,&N);
    for (int i = 0; i <=10; i++) {
        printf("la table de multiplication du %d :\n " ,N);
        printf("%d * %d = %d\n", N, i, N * i);
    }
    return 0;
}
