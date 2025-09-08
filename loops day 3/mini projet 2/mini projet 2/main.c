#include <stdio.h>
#include <stdlib.h>

int main()
{
    char mot[]="" ;
    char mot_cache[sizeof(mot)] ;
    printf("Entrer un mot : ");
    scanf("%s\n",mot);
    for(int i = 0 ; i<= sizeof(mot)-1;i++){
    mot_cache[i] = '_' ;

}
    mot_cache[sizeof(mot)-1]='\0';
    printf("%s\n",mot_cache);
    printf("%s\n",mot);
    char litr;
    int trouv=0;
    printf("Entrer une litre : ");
    scanf("%c",&litr);
    for(int i=0;i<=sizeof(mot)-1;i++ ){
    if(mot[i]==litr){
        mot_cache[i]='litr';
        trouv=1;
    }
    }
    if(mot_cache)
        printf("bon reponse");
    else
        printf("Mauvaise reponse");



    return 0;
}
