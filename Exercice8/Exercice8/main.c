#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i , N ;
   printf("Entrer un nombre :\n");
   scanf(" %d\n", &N);
   for(int i=10 ;i>=0 ;i--){
    printf("%d * %d = %d\n", N, i, N*i);
   }
    return 0;
}
