#include <stdio.h>

int sequal(char s1[], char s2[]) {
    char *p, *q;
    
    p = s1;
    q = s2;

    while (*p != '\0' && *q != '\0') {
        if (*p != *q) {
            return 0; // Strings are not equal
        }
        
        p++;
        q++;
    }

    // Check if both strings ended at the same time
    return (*p == '\0' && *q == '\0');
}

int main() {
    char str1[] = "Hello";
    char str2[] = "Hello";
    char str3[] = "World";

    if (sequal(str1, str2)) {
        printf("str1 and str2 are equal.\n");
    } else {
        printf("str1 and str2 are not equal.\n");
    }

    if (sequal(str1, str3)) {
        printf("str1 and str3 are equal.\n");
    } else {
        printf("str1 and str3 are not equal.\n");
    }

    return 0;
}
