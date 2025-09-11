#include <stdio.h>
#include <stdlib.h>
typedef struct {
  float longueur;
  float largeur;
}rectangle;
 float air(rectangle re){
    return re.longueur * re.largeur;
}
int main()
{
    rectangle re ;
    printf("Entrer la longueur : ");
    scanf("%f",&re.longueur);
    printf("Entrer la largeur : ");
    scanf("%f",&re.largeur);
    printf("l air de rectangle est : %.f",air(re));

    return 0;
}
