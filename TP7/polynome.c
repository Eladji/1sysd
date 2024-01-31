 
 #include<stdio.h>
 #include <stdlib.h>
 

struct Poly {
    int degree;
    double coeffs[50]; // deg max 49
};
int power(int value, int ipvalue){
    int ip;
    for (ip = 0; ip < ipvalue; ip++){
        value *= value;
        
    };
    return value;
}

 struct Poly padd(struct Poly p1, struct Poly p2) {
    int i =0;
    while (p1[i] != '\0' && p2[i] != '\0'){
        power(p1[i].coeffs, i);
        power(p2[i].coeffs, i);

        i++;
    }
 }
- struct Poly pmult(struct Poly p2, struct Poly p2) : 
//multiplie deux polynômes

int main() {
    struct Poly p1 = { 2, { 3, 2, 1 } };     // x^2 + 2x + 3
    struct Poly p2 = { 3, { 1, 0, -1, 2 } }; // 2x^3 - x^2 + 2

    printf("%d %.2lf\n", p1.degree, p1.coeffs[2]);
}
