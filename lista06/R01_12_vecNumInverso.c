// Escreva um programa recursivo que leia um inteiro 0 <n ≤10000 e em seguida leia n inteiros separados por espaco e imprima os mesmos numeros na ordem inversa de leitura sem alocar um espaco para guardar esses numeros em um vetor

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "recursion.h"


void imprimirInverso(int n) {
    if (n == 0)
        return;

    int num;
    scanf("%d", &num); // le o num

    imprimirInverso(n-1);

    printf("%d ", num);  // Imprimir apos a chamar recursivamente
}

int main() {
    int n;
    scanf("%d", &n);

    if (n <= 0 || n > 10000) {
        printf("Quantidade inválida.\n"); //precisa ser uma quantidade de numeros maior ou igual a 0
        return 1;
    }

    imprimirInverso(n);
    printf("\n");

    return 0;
}
