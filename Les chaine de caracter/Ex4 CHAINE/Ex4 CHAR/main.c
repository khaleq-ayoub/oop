#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char T1[50]="";
    char T2[50]="";
    printf("Entrer la premier mot : ");
    scanf("%s",&T1);

    printf("Entrer la deuxieme mot : ");
    scanf("%s",&T2);

    if(strcmp(T1 , T2)==0)
        printf("les chaine sont la meme");
    else
        printf("les chaine sont diferrent");
    return 0;
}
