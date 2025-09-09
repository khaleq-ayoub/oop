#include <stdio.h>
#include <stdlib.h>
long long factorielle(int n){
    long fact=1 ;
    for(int i=1 ; i<=n ; i++){
    fact *= i;
    }
    return fact;

}
int main()
{
    int n;
    printf("Entrer la valeur du n :");
    scanf("%d",&n);
    printf("la factorielle du %d est : %lld",n , factorielle(n));
    return 0;
}
