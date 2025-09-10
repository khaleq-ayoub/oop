#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char c[100];
    printf("Entrer un text : ");
    fgets(c,100,stdin);
    for( int i=0 ; c[i]!='\0' ; i++){
        c[i]=toupper(c[i]);
    }
    printf("la chaine en majuscule sera  %s",c);

    return 0;
}
