#include <stdio.h>
#include <stdlib.h>

int main()
{
    float moy=0 , som=0;
    float N1, N2, N3, N4, N5, i, max, min,Note;

    char nom;
    printf("le nom de l'etudiant :");
    scanf(" %s \n",&nom);
    printf("Saisissez la note 1:");
    scanf("%f\n" ,&N1);
    printf("Saisissez la note 2:");
    scanf(" %f\n " ,&N2);
    printf("Saisissez la note 3:");
    scanf(" %f\n" ,&N3);
    printf("Saisissez la note 4:");
    scanf(" %f\n" ,&N4);
    printf("Saisissez la note 5:");
    scanf(" %f\n" ,&N5);

    som=N1+N2+N3+N4+N5;
    printf("totale des notes est : %f\n" ,som);

    moy=(N1+N2+N3+N4+N5)/5;
    printf("Moyenne : %.2f\n " ,moy);

    if(note > max){
        printf("Note la plus haute : %f" ,note);
    }


    return 0;
}
