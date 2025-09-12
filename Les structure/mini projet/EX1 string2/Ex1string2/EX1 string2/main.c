#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void  mini(char text[]){
    for(int i=0 ; i<strlen(text) ; i++){
        text[i] = tolower(text[i]);
    }
}
int main()
{
    char text[]={"Bonjour Le Monde"};
    mini(text);
    printf("le resulta devient : %s",text);
    return 0;
}
