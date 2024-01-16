#include<stdlib.h>
#include<time.h>
#include<stdio.h>
#include<stdbool.h>
int main() {
    int secret, guess;
    bool check = false;
    srand(time(NULL));
    secret = rand() %10 +1;
    printf("deviner le chiffre entre 10 et 1 \n");
    scanf("%d" , &guess);
    while (check == false){
        if (guess == secret){
            check = true;
            printf("félicitation\n");
        }
        else {
            printf("essai encore\n");
            scanf("%d" , &guess);
        }
    }
    
}