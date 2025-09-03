#include <stdio.h>
#include <stdlib.h>

int main()
{
  float k , m ;
   printf("saisir une vitesse en km/h : \n");
   scanf(" %f km/h \n" ,&k);
   m = k * 0.27778;
   printf("la vitesse en m/s est : %f m/s\n" , m);
    return 0;
}
