#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*Fibonacci
Escreva um programa recursivo que leia um inteiro 0 < n ≤ 1000 e imprima a sequencia de
Fibonacci ate o nesimo termo em uma so linha com os termos separados por espaco. Teste seu programa com valores de n maiores que 1000 e note a performance.*/
int fib(int n) {
    //caso de parada 
    if(n == 0) {
        return 0;
    }
    //valores primeiros
    if(n == 1 || n == 2) {
        return 1;
    }
    //demais casos
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    scanf("%d", &n);

    // Imprimir a sequencia
    for(int i = 1; i < n; i++) {
        int fibNumber = fib(i);
        printf("%d ", fibNumber);
    }
    int fibNumber = fib(n);
    printf("%d\n", fibNumber);

    return 0;
}
