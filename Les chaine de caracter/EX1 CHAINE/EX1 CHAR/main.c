#include <stdio.h>
#include <stdlib.h>

int main()
{
    char T[50];
    printf("Entrer votre donner :");
    fgets(T , 50 ,stdin);
    printf("votre donner est : %s", T);

    return 0;
}
