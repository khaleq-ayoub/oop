#include <stdio.h>
#include <stdlib.h>

int main()
{
    char T[50];
    printf("Entrer votre donner :");
    fgets(T , 50 ,stdin);
    int i , j=0;
    for(i=1 ; T[i]!='\0'; i++){
        j++;
    }
    printf("la langueur est %d ",j);

    return 0;
}
