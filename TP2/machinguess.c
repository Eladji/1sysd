#include<stdlib.h>
#include<time.h>
#include<stdio.h>
#include<stdbool.h>
int main() {
    int secret, guess, count;
    bool check = false;
    count = 0;
    srand(time(NULL));
    guess = rand() %100 +1;
    printf("choisir chiffre entre 100 et 1 \n");
    scanf("%d" , &secret);
    while (check == false){
        if (guess == secret){
            check = true;
            printf("trouvé en %d\n" , count);
        }
        else {
            if (guess > secret){
                guess = guess/2;
                count = count+1;
                printf("fail1");
            }
            else if (guess < secret){
                guess = +1;
                count = count+1;
                printf("fail7");
            };
            }
    }
}
