# Une histoire de polynômes

Un polynôme de degré _n_ est une fonction de la forme :

$$
P:P(x) = a_n x^n + a_{n-1} x^{n-1} + ... + a_1 x + a_0
$$

On peut les représenter par une structure en C :

~~~~C 
struct Poly {
    int degree;
    double coeffs[50]; // deg max 49
};

int main() {
    struct Poly p1 = { 2, { 3, 2, 1 } };     // x^2 + 2x + 3
    struct Poly p2 = { 3, { 1, 0, -1, 2 } }; // 2x^3 - x^2 + 2

    printf("%d %.2lf\n", p1.degree, p1.coeffs[2]);
}
~~~~

Implémenter les fonctions suivantes :

- `void pdisplay(struct Poly p)` affiche un polynôme sous la
 forme conventionnelle, par ex: `x^4 + 6x^2 - x + 42` 
- `double pvalue(struct Poly p, double x)` : renvoie la valeur
 du polynôme pour la valeur donnée de _x_
- `struct Poly padd(struct Poly p1, struct Poly p2)` : additionne
 deux polynômes
- `struct Poly pmult(struct Poly p2, struct Poly p2)` : multiplie
 deux polynômes
- `struct Poly pderive(struc Poly p)` : renvoie la dérivée d'un
 polynôme

Note : pour le calcul de $`a_k x^k`$ on peut utiliser la fonction
`pow` (man 3 pow) ou bien écrire notre propre fonction d'élévation
à une puissance entière.
