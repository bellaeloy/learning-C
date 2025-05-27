
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "recursion.h"

//Escreva um programa recursivo que leia um inteiro 0 < n ≤ 1000 em uma linha e uma string s em outra linha representando, respectivamente, o tamanho de uma senha e o conjunto de caracteres possıveis para esta senha. Imprima todas as possıveis combinacoes de senha, uma por linha, de tamanho n e contendo apenas caracteres da string s. Obs: os caracteres sao sempre todos visıveis (nao ha espacos, pulos de linha, etc.)

//duas funcoes: uma auxiliar para adicionar e remover characters ate alcançar o tamanho e outra para gerar todas as possibilidades a partir dos inputs dados.
void auxGerarSenhas(char *arr, int i, char *str, int len){
    
    char *appended = malloc(sizeof(char)*len);
    //condicao de parada, quando o tamanho for alcançado
    if(i == 0){
        for(int i = 0; i < strlen(str); i++){
            printf("%c", str[i]);
        }
        printf("\n");
        return;
    }

    //demais casos
    for(int j = 0; j < len; j++){
        // Nova string realozando: str + 1 caractere + '\0'
        char *appended = malloc(strlen(str) + 2);

        strcpy(appended, str);
        int l = strlen(appended);

        // adicionar o caractere atual
        appended[l] = arr[j];
        // finaliza a string      
        appended[l+1] = '\0';

        auxGerarSenhas(arr, i-1, appended, len);

        free(appended);
    }
}
//funcao para gerar todas as possibilidades
void geradoraSenhas(char *string, int len){
    
    char *str = malloc(sizeof(char));

    str[0] = '\0'; //vazia

    auxGerarSenhas(string, len, str, strlen(string));
    free(str);
}

int main() {
    char *string;
    int len;

    scanf("%d\n", &len);
    string = readLine('\n');

    geradoraSenhas(string, len);

    free(string);

    return 0;
}
