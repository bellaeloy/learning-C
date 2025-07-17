/* Escreva um programa recursivo que leia uma string contendo apenas parênteses e decida se é
uma combinação válida de parênteses.*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "recursion.h"

bool parentesesValidos(char *string, int contadorParenteses, int i) {
    
    // mais fechamentos do que aberturas
    if (contadorParenteses < 0) {
        return 0;
    }

    // Caso base: string acaba
    if (strlen(string) == i) {
        return contadorParenteses == 0;
    }

    // Atualiza o contador
    if (string[i] == ')') {
        contadorParenteses--;
    } else if (string[i] == '(') {
        contadorParenteses++;
    }

    return parentesesValidos(string, contadorParenteses, i + 1);
}

int main() {
    char *strParenteses;
    bool ehValido;

    strParenteses = readLine('\n');

    ehValido = parentesesValidos(strParenteses, 0, 0);

    if(ehValido == true){
        printf("Valido\n");
    }
    else{
        printf("Invalido\n");
    }

    free(strParenteses);
    return 0;
}