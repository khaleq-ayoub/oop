#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
   char T1[100];
   char T2[100];
   char T3[100];

    printf("You : ");
    scanf("%s",&T1[100]);
    strcat(T1 , " happy ");
    printf("Bot : Salut , je suis heureux d ecoute sa.\n");
    printf("You : ");
    fgets(T2, 100, stdin);
    scanf("%s",&T2[100]);
    strcat(T2 , "sad");
    printf("Bot : oh non! desoler j obsirve a vous d etre magnefique\n");
    printf("You : ");
    scanf("%s",&T3[100]);
    strcat(T3 , "help");
    printf("Bot : Oui bien sur! De quoi je peux vous l aider");
    return 0;
}
