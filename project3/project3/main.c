#include <stdio.h>
#include <stdlib.h>

int main()
{
    float y, k;
    printf("Entrez la distance en kilometre : \n");
    scanf("%f", &k);
    y = k * 1093.61;
    printf("La distance en yards est : %.2f y\n", y);
    return 0;
}
