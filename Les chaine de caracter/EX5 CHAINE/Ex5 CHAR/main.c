#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{

    char T[100];
    printf("Entrer une chaine : ");
    fgets(T , 100 , stdin);
    int N = strlen(T);
    for(int i=N-1 ; i>=0 ; i--){
        printf("%c",T[i]);
    }

    return 0;
}
