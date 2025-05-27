
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Escreva um programa recursivo que leia uma linha com uma string e imprima tamanho da string.
char *readLine(char pausa) {
    int i = 0;
    char c;
    char *line = NULL;

    // Ler ate encontrar o final da palavra
    while ((c = getchar()) != pausa) {
        line = realloc(line, (i + 1) * sizeof(char)); // Realocar espaco
        line[i] = c;
        i++;
    }
    
    line = realloc(line, (i + 1) * sizeof(char));
    line[i] = '\0';
    return line;
}
int sizeString (char *string) {    
    char c = *string;
    //condicao de parada
    if(c == '\0' ){
        return 0;
    }
    //demais casos
    return 1 + sizeString(string + sizeof(char)); //o novo argumento cria um novo ponteiro

}

int main() {
    int result;
    char *str;

    str = readLine('\n');
    result = sizeString(str);
    printf("%d\n", result);

    return 0;
}
