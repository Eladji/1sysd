#include<stdio.h>
#include <ctype.h>
#include <stdlib.h>
void handleError(const char *errorMessage) {
    fprintf(stderr, "Error: %s\n", errorMessage);
    exit(EXIT_FAILURE);
}

void cesar(char s[], int k) {

    while (s[i] != '\0'){
        
        switch (s[i]){
            case s[i] < 41 || s[i] > 90 && s[i] <  97|| s[i] > 122:
            handleError("not a charatere")


            case s[i] >= 41 && s[i] <= 91:
                char tmp = s[i] - 'A';
                tmp += k;
                tmp = tmp % 26;
                s[i] = tmp + 'A';
            case s[i] >= 97 && s[i] <= 122:
                char tmp = s[i] - 'a';
                tmp += k;
                tmp = tmp % 26;
                s[i] = tmp + 'a';

        } 

        
    }
}



int main() {
    char phrase[100]; // 99 caractères max
    int secret;

    printf("Tapez une phrase : ");
    scanf("%[^\n]", phrase); // permet d'avoir des espaces dans la donnée
    getchar(); // consomme le saut de ligne
    printf("Décalage (secret) : ");
    scanf("%d", &secret);
    cesar(phrase, secret);
    printf("Phrase chiffrée : %s\n", phrase);
}
