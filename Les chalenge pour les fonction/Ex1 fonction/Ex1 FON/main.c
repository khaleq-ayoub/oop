#include <stdio.h>
#include <stdlib.h>
int somme(int a , int b){
    int S=0;
    S = a + b;
    return S;

}
int main()
{
    int a, b;
    printf("Entrer la valeur de a : ");
    scanf("%d",&a);
    printf("Entrer la valeur de b : ");
    scanf("%d",&b);
    printf("La somme de les deux nombres est : %d",somme(a,b));
    return 0;
}
