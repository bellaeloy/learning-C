/* Uma criança está subindo escadas e consegue subir 1, 2 ou 3 degraus por passo. Escreva um
programa recursivo que leia um inteiro 0 < n ≤ 30 representando o número de degraus na escada
e imprima de quantas maneiras diferentes a criança pode subir essa escada. (Cracking the Code
Interview)*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "recursion.h"

int maneirasDeSubir(int degraus){

    //caso impossivel
    if(degraus < 0){
        return 0;
    }
    
    //quando o tamanho acaba
    if(degraus == 0){
        return 1;
    }
    //demais casos
    int maneiras = maneirasDeSubir(degraus-1)+maneirasDeSubir(degraus-2)+maneirasDeSubir(degraus-3);

    return maneiras;
}

int main() {
    int degraus;
    int quantidadeDeManeiras;

    scanf("%d",&degraus);

    quantidadeDeManeiras = maneirasDeSubir(degraus);
    printf("%d\n", quantidadeDeManeiras);
    
    return 0;
}