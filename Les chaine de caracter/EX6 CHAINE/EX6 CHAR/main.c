#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char T[100];
    printf("Entrer la chaine principal : ");
    fgets(T , 100 ,stdin);
    char s ;
    printf("Entrer un caracter : ");
    scanf("%c",&s);
    int n=0;
    for(int i = 0 ; i<=strlen(T)-1 ; i++){
        if(T[i]==s){
            n++;
        }
    }
    printf("le nombre de caracter %c se trouve dans la chaine %s est : %d",s ,T ,n);

    return 0;
}
