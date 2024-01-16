#include<stdio.h>

int main() {
    int age;

    printf("Votre âge : "); // man 3 printf
    scanf("%d", &age); // man 3 scanf
    if (age > 42) {
        printf("Ok, Boomer!\n");
    } else {
        printf("Time to learn UNIX\n");
    }
}
