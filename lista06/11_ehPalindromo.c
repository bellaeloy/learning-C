//Escreva um programa recursivo que leia uma string e diga se ela eh ou n um palındromo
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "recursion.h"

bool ehPalindromo(char *string, int comeco, int tam){

    //tam == 0 eh o caso base
    if(tam == 1){
        return true;
    }

    //outros casos eh comparar as extremidades das letras e ir entrando
    if(string[comeco] != string[tam]){
        return false;
    }
    ehPalindromo(string, comeco+1, tam-1);
}

int main() {
    char *string;
    int tam;

    string = readLine('\n');

    tam = strlen(string);

    bool result = ehPalindromo(string, 0, tam);

    if (result == 0){
        printf("Sim\n");
    }else{
        printf("Não\n");
    }

    free(string); 
    return 0;
}