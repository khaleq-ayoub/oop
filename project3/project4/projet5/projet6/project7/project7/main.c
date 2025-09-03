#include <stdio.h>
#include <stdlib.h>

int main() {
    float a, b, c;
    float moy;
    printf("Entrez le premier nombre : ");
    scanf("%f", &a);
    printf("Entrez le deuxieme nombre : ");
    scanf("%f", &b);
    printf("Entrez le troisieme nombre : ");
    scanf("%f", &c);
    moy = (a * 2 + b * 3 + c * 5) / (2 + 3 + 5);

    printf("La moyenne ponderee  est : %.2f\n", moy);

    return 0;
}
