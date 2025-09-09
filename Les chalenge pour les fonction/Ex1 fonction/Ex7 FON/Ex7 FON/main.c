#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void inverser_chaine(char str[] , int n){
   int i;
   printf("le tableau inverse est : ");
    for(int i=n-1 ; i>=0 ; i-- ){
       printf("%c",str[i]);
    }
}
int main()
{
    char str[6]="AYUB";
    inverser_chaine(str ,  6);
    return 0;
}
