#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char T1[50];
    char T2[50];
    strcat(T1 ,"ayub" );
    strcat(T2 , "muh");
    if(strcmp(T1 , T2)==0)
        printf("les chaine sont la meme");
    else
        printf("les chaine sont diferrent");
    return 0;
}
