#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_LEN 264

const char *positif_keywords[]={"happy" , "good" , "amazing"};
const char *positif_repose[]={"Great to hear that!" , "awesome" , "that's nice"};
const char *negatif_keywords[]={"sad" , "bad" , "not good"};
const char *negatif_reponse[]={"i'm sorry to hear that" , "Hope things get better soon","why? , i wish to bee fine"};


int contains_keywords(const char *input ,const char *keywords[], int num_keyword[]){
    for( int i=0 ; i<num_keyword[MAX_LEN] ; i++){
        if(strstr(input,keywords[i])!= NULL){
            return -1;
        }
    }

}
int main()
{
    int i;
    char input[MAX_LEN];
    srand(time(NULL));
    printf("chat Bot : Hello : type exit to quit .\n");
    while(i){
     printf("You : ");
     fgets(input , MAX_LEN , stdin);
             input[strcspn(input, "\n")] = '\0'; // Supprimer le \n

        if (strcmp(input, "exit") == 0) {
            printf("Bot: Goodbye!\n");
            break;
        }

        int pos_index = int contains_keywords(const char* input,const char* keywords[], num_keyword[MAX_LEN]);
        int neg_index = contains_keywords(input, negatif_keywords, 3);

        if (pos_index != -1) {
            int r = rand() % 3;
            printf("Bot: %s\n", positif_repose[r]);
        } else if (neg_index != -1) {
            int r = rand() % 3;
            printf("Bot: %s\n", negatif_reponse[r]);
        } else {
            printf("Bot: I'm not sure how to respond to that.\n");
        }
    }

    return 0;
}
