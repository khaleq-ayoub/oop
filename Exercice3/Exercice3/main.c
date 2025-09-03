#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,n,som;
   printf("Entrer un nombre");
   scanf("%d",&n);
   i=0;
   for(int i=0 ; i<=n ; i++){
    som=som+i;
   }
   printf("la somme des nombres est :%d\n" , som);
    return 0;
}
