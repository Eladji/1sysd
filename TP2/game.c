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
            if (guess > secret){
                printf("c'est moins\n");
                scanf("%d" , &guess);
            }
            else if (guess < secret){
                printf("c'est plus\n");
                scanf("%d" , &guess);
            };
            }
        }
    }
    
