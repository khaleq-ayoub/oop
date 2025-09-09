#include <stdio.h>
#include <stdlib.h>
int produit(int a , int b){
    int P=0;
    P = a * b;
    return P;

}
int main()
{
    int a, b;
    printf("Entrer la valeur de a : ");
    scanf("%d",&a);
    printf("Entrer la valeur de b : ");
    scanf("%d",&b);
    printf("La multiplication de les deux nombres est : %d",produit(a,b));
    return 0;
}
