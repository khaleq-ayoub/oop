#include <stdio.h>
#include <stdio.h>

int main() {
    float c, k;
    printf("Entrez la temperature en degres Celsius : \n");
    scanf("%f", &c);
    k = c + 273.15;
    printf("La temperature en Kelvin est : %.2f K\n", k);

    return 0;
}
