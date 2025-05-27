
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Escreva um programa recursivo que leia um inteiro 0 < n ≤ 10000 em uma linha e em seguida leia n inteiros separados por espaco em outra linha e imprima o menor valor deste vetor.


int menorNum(int n, int *vec) {
    
    //condicao de parada
    if (n == 1) {
        return vec[0];  //vetor com 1 elemento
    }

    //demais casos
    int menorRestantes = menorNum(n - 1, vec);

    if (vec[n-1] < menorRestantes) {
        return vec[n-1];
    } else {
        return menorRestantes;
    }
}


int main() {
    int n;
    int *vecInt;
    int menorValor;

    scanf("%d",&n);

    vecInt = malloc(sizeof(int)*n);

    for(int i = 0; i < n; i++){
        scanf("%d", &vecInt[i]);
        getchar();
    }

    menorValor = menorNum(n, vecInt);
    printf("%d\n", menorValor);

    free(vecInt);

    return 0;
}
