#include<stdio.h>
#include<stdlib.h>

int main() {
    int n;

    printf("RAND_MAX = %d\n", RAND_MAX);
    n = rand();
    printf("Tirage : %d\n", n);
}
