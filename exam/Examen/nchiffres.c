#include <stdio.h>

int n_chiffres(char *msg) {
    int count = 0;
    int i = 0;
    
    while (msg[i] != '\0') {
        if (msg[i] >= '0' && msg[i] <= '9') {
            count++;
        }
        i++;
    }
    return count;
}

int main() {
    char phrase[100];
    printf("Type your phrase (max 100 characters): ");
    scanf("%s", phrase);

    int count = n_chiffres(phrase);
    printf("Number of numbers in the phrase: %d\n", count);

    return 0;
}
