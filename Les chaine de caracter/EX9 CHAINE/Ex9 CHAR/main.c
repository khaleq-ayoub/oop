
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char CH[100];
    printf("Entrer le texte : ");
    fgets(CH,100,stdin);
    CH[strcspn(CH, "\n")] = '\0';
    int j = 0;
    char result[100];
    for(int i=0 ; CH[i]!='\0' ; i++){
        if(CH[i]!=' '){
            result[j]=CH[i];
            j++;
        }
    }
     result[j] = '\0';
    printf("Le texte sans espace est : %s",result);
    return 0;

}
