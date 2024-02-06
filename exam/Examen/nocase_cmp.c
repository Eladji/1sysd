#include <stdio.h>
#include <stdlib.h>

int nocase_equal(char *s1, char *s2) {
    while (*s1 && *s2) {
        if (*s1 != *s2 && (*s1 - *s2 != 'A' - 'a' && *s1 - *s2 != 'a' - 'A')) {
            return 0;
        }
        s1++;
        s2++;
    }
    return *s1 == *s2;
}

void usage(char *argv[]) {
    printf("Need two separated phrases\n");
    exit(1);
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        usage(argv);
    }
    
    if (nocase_equal(argv[1], argv[2])) {
        printf("Les deux chaines sont identiques\n");
    } else {
        printf("Les deux chaines sont différentes\n");
    }
    return 0;
}