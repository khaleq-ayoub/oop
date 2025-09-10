#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char T1[200];
    char T2[100];
    printf("Entrer le texet : ");
    fgets(T1 , 200, stdin);
    T1[strcspn(T1, "\n")] = '\0';
    printf("Entrer la mot : ");
    fgets(T2 , 100 , stdin );
    T2[strcspn(T2, "\n")] = '\0';
    if(strstr(T1 , T2)!= NULL)
        printf("Exist\n");
    else
        printf("Not exist\n");

    return 0;
}
