#include<stdio.h>
#define MAX 50
int i, j, taille_tableau,tableau[MAX], valeur, tmp, imin;

int main(){
    printf("choisiez la taille de votre tableau (max 50)");
    scanf("%d", &taille_tableau);
    for (i = 0; i < taille_tableau; i++){
        printf("entré une valeur pour la position %d\n", i);
        scanf("%d", &valeur);
        tableau[i] = valeur;
        }
    for (i = 0; i < (taille_tableau -1); i++){
        imin = i;
        for (j = i+1; j < (taille_tableau); j++){
            if (tableau[j] < tableau[imin]){
                imin = j;
            }
        }
        if (imin != i){
            tmp = tableau[imin];
            tableau[imin] = tableau[i];
            tableau[i] = tmp;
        } 

    }
    for (i = 0; i < taille_tableau; i++){
        printf("%d", tableau[i]);
    }


}