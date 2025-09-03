#include <stdio.h>

int main()
{
    int N , i;
    int fact;
    printf("Entrer un nombre :");
    scanf("%d ", &N);
    i=0;
    fact=1;
    for(int i=1 ; i<=N ;i++){
       fact=fact*i ;
    }
      printf("le factorielle de %d est : %d",N , fact);
    return 0;
}
