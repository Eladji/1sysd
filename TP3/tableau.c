#include<stdio.h>
int i, taille_tableau, valeur_max, valeur_min, tableau[10], valeur, add1 =0, add2;

int main(){
    printf("choisiez la taille de votre tableau (max 10)");
    scanf("%d", &taille_tableau);
    tableau[taille_tableau];
    for (i = 0; i < taille_tableau; i++){
        printf("entré une valeur pour la position %d\n", i);
        scanf("%d", &valeur);
        tableau[i] = valeur;
    };
    for (i = 0; i < taille_tableau; i++){
        add2 = tableau[i];
        add1 = add1 + add2;
    }
    printf(" la somme est de %d", add1);

}