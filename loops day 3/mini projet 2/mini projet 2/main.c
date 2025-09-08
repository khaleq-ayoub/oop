#include <stdio.h>
#include <stdlib.h>

int main()
{
    char mot[]="math" ;
    char mot_cache[sizeof(mot)] ;
    printf("Entrer un mot : ");
    scanf("%s",&mot);
    for(int i = 0 ; i<= sizeof(mot)-1;i++){
    mot_cache[i] = '_' ;

}
    printf("%s\n",mot_cache);
    printf("%s\n",mot);
    char litr ;
    printf("Entrer une litre : ");
    scanf("%c",&litr);
    if(litr==mot_cache)
        printf("dans le mot cache");
    else
        printf("game over");



    return 0;
}
