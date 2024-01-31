#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int split(char *msg, char ***words) {
    int count = 0;
    int wordStart = 0;
    int i;

    for (i = 0; msg[i] != '\0'; i++) {
        if (msg[i] == ' ') {
            if (i > wordStart) {
                *words = realloc(*words, (count + 1) * sizeof(char *));
                int wordLength = i - wordStart;
                (*words)[count] = (char *)malloc((wordLength + 1) * sizeof(char));
                strncpy((*words)[count], msg + wordStart, wordLength);
                (*words)[count][wordLength] = '\0';
                count++;
            }
            wordStart = i + 1; // Début du prochain mot après l'espace
        }
    }

    // Gérer le dernier mot si la chaîne ne se termine pas par un espace
    if (i > wordStart) {
        *words = realloc(*words, (count + 1) * sizeof(char *));
        int wordLength = i - wordStart;
        (*words)[count] = (char *)malloc((wordLength + 1) * sizeof(char));
        strncpy((*words)[count], msg + wordStart, wordLength);
        (*words)[count][wordLength] = '\0';
        count++;
    }

    return count;
}

void freeWords(char **words, int count) {
    for (int i = 0; i < count; i++) {
        free(words[i]);
    }
    free(words);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s \"phrase\"\n", argv[0]);
        return 1;
    }

    char **words = NULL;
    int wordCount = split(argv[1], &words);

    printf("%d mots :\n", wordCount);
    for (int i = 0; i < wordCount; i++) {
        printf("%s\n", words[i]);
    }

    freeWords(words, wordCount);

    return 0;
}
