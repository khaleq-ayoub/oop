#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void supprime(char text[]){
     for(int i=0 ; i<strlen(text) ; i++){
      if (ispunct((unsigned char )text[i])){
       text[i] = ' ';
      }
     }
     printf("LES resultat sera :%s",text);
}

int main()
{
    char text[] = "Le chat noir dort. Le chien joue !";

    supprime(text);

    return 0;
}
