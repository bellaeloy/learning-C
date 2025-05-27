
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "recursion.h"
#include <ctype.h>


//Escreva um programa recursivo que leia uma string em uma linha e imprima a quantidade deletras consoantes na string.
int quantConsoantes(char *str) {

    //condicao de parada
    if(*str == '\0' ){
        return 0;
    }

    char c = tolower(*str); //transformar em minusculas

    if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
        return 1 + quantConsoantes(str + 1);
    } else {
        return quantConsoantes(str + 1);
    }
}


int main() {
    char *string;
    int numConsoantes;

    string = readLine('\n');

    numConsoantes = quantConsoantes(string);

    printf("%d\n", numConsoantes);

    free(string);

    return 0;
}
