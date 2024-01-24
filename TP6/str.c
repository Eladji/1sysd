

#include<stdio.h>

int main() {
    int i;
    char s1[] = { 'H', 'e', 'l', 'l', 'o', '\0' }; 
    char s2[] = { 72, 101, 108, 108, 111, 0 };
    char s3[] = "Hello"; // le zéro terminal est ajouté automatiquement
    printf("%s\n", s1);
    printf("%s\n", s2);
    printf("%s\n", s3);
    i = 0;
    while(s3[i]) { // 0 (fin de chaîne) est faux
        printf("%c\n", s3[i]);
        i++;
    }
    printf("%d", i);
}
