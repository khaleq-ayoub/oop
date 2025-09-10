#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char text[100];
    printf("Entrer un text : ");
    fgets(text , 100 , stdin);
     for(int i=0 ; text[i]!='\0' ; i++){
        text[i] = tolower(text[i]);
     }
     printf("Le texte en tous carachter miniscule sera : %s",text);

    return 0;
}
