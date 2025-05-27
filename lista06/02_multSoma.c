#include <stdio.h>
#include <stdlib.h>
#include <string.h>

////Escreva um programa recursivo que leia uma linha com dois numeros inteiros 0 ≤ a, b ≤ 10000 separados por espaco e multiplique-os usando apenas a operacao de soma;

int multSoma(int num1, int num2){
    int mult, n;
    
    if(num2 == 1){
        return num1;
    }
    //demais casos
    mult = num1 + multSoma(num1, num2-1);
    return mult;
}

int main() {
    int n1, n2, multiplicacao;
    scanf("%d %d", &n1, &n2);
    getchar();

    multiplicacao = multSoma(n1, n2);
    printf("%d\n", multiplicacao);

    return 0;
}
