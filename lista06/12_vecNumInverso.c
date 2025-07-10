// Escreva um programa recursivo que leia um inteiro 0 <n ≤10000 e em seguida leia n inteiros separados por espaco e imprima os mesmos numeros na ordem inversa de leitura sem alocar um espaco para guardar esses numeros em um vetor

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "recursion.h"

void vecNumInverso(int *vecNum, int tam){
    
    //caso base eh quando o tamanho acaba
    if(tam == 0){
        return;
    }
    //demais casos
    printf("%d ",vecNum[tam-1]);
    vecNumInverso(vecNum, tam-1);
}

int main() {
    int *vecNum;
    int tam;

    scanf("%d\n",&tam);

    vecNum = malloc(sizeof(int)*tam);

    for(int i = 0; i < tam; i++){
        scanf("%d", &vecNum[i]);
    }

    vecNumInverso(vecNum, tam);
    printf("\n");
    
    free(vecNum);
    return 0;
}