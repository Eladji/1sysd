#include <stdio.h>
void display_tab(int tab[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

int nb_uniq(int tab[], int size, int newtab[]) {
   int count = 0;
   int check= 0;
   for (int i = 0 ; i < size ; i++){
    
        if (tab[i] == check){
            continue;
        }
        else{
        newtab[count] = tab[i];
        check = tab[i];
        count++;
        }
}


if (count != size){
    
return count;
}
else {
    return size;
}

}



int main() {
    int t1[] = { 1, 2, 5, 7, 10 }; // pas de doublons
    int t2[] = { 1, 1, 4, 5, 42, 42, 42, 4, 5, 42 }; // doublons : 1, 1 et 42, 42, 42 
    int new_t1[50], new_t2[50]; // taille maxi 50 pour le résultat.
    int new_size;

    new_size = nb_uniq(t1, 5, new_t1);
   
    display_tab(new_t1, new_size); // normalement inchangé
    new_size = nb_uniq(t2, 10, new_t2);
  
    
    display_tab(new_t2, new_size); // 1 4 5 42 4 5 42
    
}