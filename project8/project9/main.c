#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, z1, x2, y2, z2;
    double distance;

    printf("Entrez les coordonn�es du premier point (x1 y1 z1) : ");
    scanf("%.1f %.1f %.1f", &x1, &y1, &z1);

    printf("Entrez les coordonn�es du deuxi�me point (x2 y2 z2) : ");
    scanf("%.1f %.1f %.1f", &x2, &y2, &z2);

    distance = sqrt( pow(x2 - x1, 2) +
                    pow(y2 - y1, 2) +
                    pow(z2 - z1, 2));

    printf("La distance entre les deux points est : %.2f\n", distance);

    return 0;
}
