#include <stdio.h>
#include <stdlib.h>
typedef struct{

    float rayon;
}cercle;
float air(cercle cer){

    const float pi =3.14;
    float surface;
    surface =pi*cer.rayon*cer.rayon;
    return surface;
 }
int main()
{
    cercle cer;
    printf("Entrer le rayon : ");
    scanf("%f",&cer.rayon);
    float i = air(cer);
     printf("la surface de cycle dont le rayon r=%.2f est egal a : %.2f",cer.rayon,i);



    return 0;
}
