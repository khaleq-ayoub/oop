#include <stdio.h>
#include <stdlib.h>
int maximum(int a, int b){
    int max;
    if(max < a)
        return a;
    else
        return b;
}
int main()
{
    int a, b;
    printf("Entrer la valeur de a : ");
    scanf("%d",&a);
    printf("Entrer la valeur de b : ");
    scanf("%d",&b);
    printf("la plus grand valeurs entre les deux nombres est :%d",maximum(a , b));
    return 0;
}
