#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N , ni = 0 , mod;
    printf("Entrer un nombre :");
    scanf("%d",&N);
    for(N != 0;mod = N % 10;N = N / 10){
       ni = ni * 10 + mod;
    }
     printf("l'inverse de le nombre est : %d",ni);
    return 0;
}
