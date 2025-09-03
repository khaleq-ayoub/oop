#include <stdio.h>
#include <stdlib.h>


int main() {
    float a, b;

    printf("Entrez le premier nombre : ");
    scanf("%f", &a);
    printf("Entrez le deuxième nombre : ");
    scanf("%f", &b);
    printf("les operation de les deux nombre est :\n");
    printf("Addition       : %.2f + %.2f = %.2f\n", a, b, a + b);
    printf("Soustraction   : %.2f - %.2f = %.2f\n", a, b, a - b);
    printf("Multiplication : %.2f * %.2f = %.2f\n", a, b, a * b);

    if (b != 0) {
        printf("Division       : %.2f / %.2f = %.2f\n", a, b, a / b);
    } else {
        printf("Division       : Impossible (division par zéro)\n");
    }

    return 0;
}

