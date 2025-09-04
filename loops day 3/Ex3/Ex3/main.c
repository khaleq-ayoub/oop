#include <stdio.h>
#include <math.h>

int main(){
    int n ;

    printf("Entrer un nombre : ");
    scanf("%d",&n);
    printf("le nombre premier de 1 ==> %d est :\n", n);
    for(int N = 2 ; N <= n ; N++){
        int est_pr = 1;
    for(int i = 2 ; i <= sqrt(N) ; i++){
            if (N % i == 0){
            est_pr = 0;
            break;
            }
    }
      if(est_pr){
        printf("%d\n", N);
      }
    }
    printf("\n");
    return 0;
}
