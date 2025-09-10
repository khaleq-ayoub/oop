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
    strcat(T1 , T2);
    printf("le texte sera : %s\n",T1);
    return 0;
}
