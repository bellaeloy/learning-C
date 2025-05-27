#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//EXTRAS
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

//01_sequenciaFibonacci
int fib(int n) {
    //caso de parada 
    if(n == 0) {
        return 0;
    }
    //valores primeiros
    if(n == 1 || n == 2) {
        return 1;
    }
    //demais casos
    return fib(n - 1) + fib(n - 2);
}

//02_multSoma
int multSoma(int num1, int num2){
    int mult, n;
    
    if(num2 == 1){
        return num1;
    }
    //demais casos
    mult = num1 + multSoma(num1, num2-1);
    return mult;
}

//03_sequenciaLucas
int seqLucas(int n, int P, int Q, int x1, int x2) {
    int valor;

    if (n == 1) {
        return x1;
    }
    if (n == 2) {
        return x2;
    }
    valor = P * seqLucas(n - 1, P, Q, x1, x2) - Q * seqLucas(n - 2, P, Q, x1, x2);
    return valor;
}

//04_sizeString
int sizeString (char *string) {    
    
    char c = *string;

    //condicao de parada
    if(c == '\0' ){
        return 0;
    }
    //demais casos
    return 1 + sizeString(string + sizeof(char)); //o novo argumento cria um novo ponteiro

}

//05_

//06_menorNum
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

//07_numConsoantes
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


//08_