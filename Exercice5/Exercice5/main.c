#include <stdio.h>
#include <stdlib.h>
int main() {
    int b, e, i ;
    int r = 1;
    printf("Entrer la base : ");
    scanf("%d", &b);

    printf("Entrer exposant : ");
    scanf("%d", &e);

    for (int i = 0; i < e; i++) {
        r *= b;
    }

    printf("%d^%d = %d\n", b, e, r);

    return 0;
}

