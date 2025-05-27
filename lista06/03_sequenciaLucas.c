#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Escreva um programa recursivo que leia uma linha com cinco inteiros representando, respectivamente, os valores de n, P,Q, x1, x2 (1 < n,, P,Q, x1, x2 < 1000). Imprima em uma linha separados por espacos os n primeiros termos da Sequencia de Lucas definida por P e Q, com os dois primeiros termos sendo, respectivamente, x1 e x2 dados.
/* Entrada: 8 2 2 0 1 | Saída: 0 1 2 2 0 -4 -8 -8
   Entrada: n=8 P=2 Q=2 x1=0 x2=1 | Saída: 0 1 2 2 0 -4 -8 -8
*/

int seqLucas(int n, int P, int Q, int x1, int x2) {
    int valor;

    if (n == 1) {
        return x1;
    }
    if (n == 2) {
        return x2;
    }
    valor = P * seqLucas(n - 1, P, Q, x1, x2) - Q * seqLucas(n - 2, P, Q, x1, x2);
    return valor;
}

int main() {
    int n, P, Q, x1, x2, result;
    scanf("%d %d %d %d %d", &n, &P, &Q, &x1, &x2);
    getchar();

    //limites dos valores
    if(n < 1){
        printf("Valor de n tem que ser maior ou igual a 1.\n");
    }
    if(x1 > 1000 || x2 > 1000){
        printf("Valor de x1 ou x2 tem que ser menor que 1000.\n");
    }

    //chamar a funcao e imprimir
    for(int i = 1; i <= n; i++) {
       result = seqLucas(i, P, Q, x1, x2);
       printf("%d ", result);
    }
    printf("\n");

    return 0;
}
