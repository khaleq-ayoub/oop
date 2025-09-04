#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N , i=1;
    printf("Entrer un nombre : ");
    scanf("%d",&N);
    printf("les facteurs du nombre est : %d\n",N);
     while(i<=N/2){
        if(N % i== 0){
         printf("%d\n",i);
        }
        i++;
     }
    printf("%d\n",N);
    return 0;
}
