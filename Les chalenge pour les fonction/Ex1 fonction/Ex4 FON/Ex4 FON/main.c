#include <stdio.h>
#include <stdlib.h>

int minimum(int a, int b){
    int min;
    if(min>a)
        return a;
    else
        return b;
}
int main()
{
    int a , b;
    printf("Entrer la valeur de a :");
    scanf("%d",&a);
    printf("Entrer la valeur de b :");
    scanf("%d",&b);
    printf("La valeur minimal est : %d",minimum(a,b));
    return 0;
}
