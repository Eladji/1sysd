#include<stdio.h>

void display(double m[3][3]) {
    for (int i = 0; i < 3 ; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%.2lf ", m[i][j]);
        }
        printf("\n");
    }
}


void add(double m1[3][3], double m2[3][3], double result[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = m1[i][j] + m2[i][j];
        }
    }
}

void mult(double m1[3][3], double m2[3][3], double result[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                result[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
}

void transp(double m[3][3], double result[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[j][i] = m[i][j];
        }
    }
}

int main() {
    double m1[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9  } };
    double m2[3][3] = { { 2, 3, 4 }, { 5, 6, 7 }, { 8, 9, 10 } };
    double m3[3][3];

    display(m1);
    printf("\n");
    display(m2);
    printf("Addition\n");
    add(m1, m2, m3);
    display(m3);
    printf("Produit\n");
    mult(m1, m2, m3);
    display(m3);
    printf("Transposée\n");
    transp(m1, m3);
    display(m3);
}
