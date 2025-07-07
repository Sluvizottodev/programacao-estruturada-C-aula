#include <stdio.h>

void somaDivisores(int v[5]) {
    for (int i = 0; i < 5; i++) {
        int soma = 0;
        for (int j = 1; j < v[i]; j++) {
            if (v[i] % j == 0) {
                soma += j;
            }
        }
        printf("Soma dos divisores de %d: %d\n", v[i], soma);
    }
}

int main() {
    int v[5] = {8, 10, 15, 28, 6};
    somaDivisores(v);
    return 0;
}
