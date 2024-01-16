#include<stdio.h>
int i, taille_tableau, valeur_max=0, valeur_min =0, tableau[10], valeur, add1 =0;

int main(){
    printf("choisiez la taille de votre tableau (max 10)");
    scanf("%d", &taille_tableau);
    tableau[taille_tableau];
    for (i = 0; i < taille_tableau; i++){
        printf("entré une valeur pour la position %d\n", i);
        scanf("%d", &valeur);
        tableau[i] = valeur;
    };
    valeur_max = valeur; 
    valeur_min = valeur; 
    for (i = 0; i < taille_tableau; i++){
        add1 += tableau[i];
        if (tableau[i] < valeur_min){
            valeur_min = tableau[i];
        }
        if (tableau[i] > valeur_max)
        {
            valeur_max = tableau[i];
        }
        
    }
    printf(" la somme est de %d et la valeur max est de %d et la min est %d", add1, valeur_max, valeur_min);

}