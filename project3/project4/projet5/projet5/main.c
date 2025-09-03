#include <stdio.h>
#include <stdlib.h>

int main()
{
    float t ;
    printf("Entrez la temperature en °C : ");
    scanf("%f", &t);
    if (t < 0) {
        printf("Etat de l'eau : Solide (glace)\n");
    } else if (t < 100) {
        printf("Etat de l'eau : Liquide (eau)\n");
    } else {
        printf("Etat de l'eau : Gaz (vapeur)\n");
    }

    return 0;
}


