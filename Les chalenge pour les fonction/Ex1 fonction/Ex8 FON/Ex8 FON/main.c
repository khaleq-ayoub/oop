#include <stdio.h>
#include <stdlib.h>
 int est_pair(int N){
     if(N%2==0)
        return 1;
     else
        return 0;

 }

int main()
{
    int N;
    printf("Entrer un nombre : ");
    scanf("%d",&N);
    printf("le nombre est %d",est_pair(N));
    return 0;
}
