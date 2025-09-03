#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N ,i;
    printf("Entrer un nombre :");
    scanf(" %d ",&N);
    for(int i=1  ; i<=N ;i++){
        printf("%d", 2 * i);
    }
    return 0;
}
