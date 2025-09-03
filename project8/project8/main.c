#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, moyg;
    double cbrt(moyg);

    printf("Entrez le premier nombre : ");
    scanf("%.2f", &a);

    printf("Entrez le deuxieme nombre : ");
    scanf("%.2f", &b);

    printf("Entrez le troisieme nombre : ");
    scanf("%.2f", &c);

    moyg = cbrt(a * b * c);


    printf("La moyenne geometrique est : %.2f\n", moyg);

    return 0;
}


