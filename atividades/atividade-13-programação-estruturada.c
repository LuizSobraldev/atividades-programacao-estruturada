// Questão 1
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *numeros = (int*)malloc(5 * sizeof(int));
    
    if (numeros == NULL) {
        printf("Erro ao alocar memória.");
        return 1;
    }
    
    printf("Digite 5 números inteiros:\n");
    for (int i = 0; i < 5; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nOs números digitados foram:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", numeros[i]);
    }

    free(numeros);
    
    return 0;
}

// Questão 2 
#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int *vetor = (int *)malloc(tamanho * sizeof(int));

    if (vetor == NULL) {
        printf("Erro ao alocar memória.");
        return 1;
    }

    printf("Digite os valores do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor para a posição %d: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("\nVetor lido:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);

    return 0;
}

// Questão 3
#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho, pares = 0, impares = 0;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int *vetor = (int *)malloc(tamanho * sizeof(int));

    if (vetor == NULL) {
        printf("Erro ao alocar memória.");
        return 1;
    }

    printf("Digite os valores do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor para a posição %d: ", i);
        scanf("%d", &vetor[i]);
        if (vetor[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    printf("\nQuantidade de números pares: %d\n", pares);
    printf("Quantidade de números ímpares: %d\n", impares);

    free(vetor);

    return 0;
}


// Questão 4
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Função para alocar dinamicamente uma string de tamanho especificado
char* alocaString(int tamanho) {
    // Aloca dinamicamente memória para a string
    char *string = (char *)malloc((tamanho + 1) * sizeof(char)); // +1 para o caractere nulo

    // Verifica se a alocação foi bem-sucedida
    if (string == NULL) {
        printf("Erro ao alocar memória.");
        exit(1);
    }

    return string;
}

// Função para imprimir a string sem suas vogais
void imprimirSemVogais(char *string) {
    printf("\nString sem vogais: ");
    for (int i = 0; string[i] != '\0'; i++) {
        // Verifica se o caractere atual não é uma vogal (maiúscula ou minúscula)
        if (tolower(string[i]) != 'a' && tolower(string[i]) != 'e' && tolower(string[i]) != 'i' && tolower(string[i]) != 'o' && tolower(string[i]) != 'u') {
            printf("%c", string[i]);
        }
    }
    printf("\n");
}

int main() {
    int tamanho;

    printf("Digite o tamanho da string: ");
    scanf("%d", &tamanho);

    char *string = alocaString(tamanho);

    printf("Digite a string: ");
    scanf(" %[^\n]s", string); 

    printf("\nString original: %s\n", string);

    imprimirSemVogais(string);

    free(string);

    return 0;
}


// Questão 5
#include <stdio.h>
#include <stdlib.h>

int* alocaVetor(int tamanho) {
    int *vetor = (int *)malloc(tamanho * sizeof(int));

    if (vetor == NULL) {
        printf("Erro ao alocar memória.");
        exit(1);
    }

    return vetor;
}

int main() {
    int N, X, contador = 0;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &N);

    int *vetor = alocaVetor(N);

    printf("Digite os %d números inteiros do vetor:\n", N);
    for (int i = 0; i < N; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Digite o número X: ");
    scanf("%d", &X);

    printf("\nMúltiplos de %d no vetor:\n", X);
    for (int i = 0; i < N; i++) {
        if (vetor[i] % X == 0) {
            printf("%d ", vetor[i]);
            contador++;
        }
    }
    printf("\nTotal de múltiplos de %d no vetor: %d\n", X, contador);

    free(vetor);

    return 0;
}


// Questão 6
#include <stdio.h>
#include <stdlib.h>

// Função para alocar dinamicamente a memória
int* alocaMemoria(int tamanho) {
    // Verifica se o tamanho da memória é múltiplo do tamanho de um inteiro
    if (tamanho % sizeof(int) != 0) {
        printf("Tamanho da memória deve ser múltiplo do tamanho de um inteiro.\n");
        exit(1);
    }

    // Aloca dinamicamente memória para a simulação da memória
    int *memoria = (int *)calloc(tamanho / sizeof(int), sizeof(int)); // Inicializa todos os elementos com zero

    // Verifica se a alocação foi bem-sucedida
    if (memoria == NULL) {
        printf("Erro ao alocar memória.");
        exit(1);
    }

    return memoria;
}

// Função para inserir um valor em uma determinada posição da memória
void inserirValor(int *memoria, int posicao, int valor) {
    memoria[posicao] = valor;
    printf("Valor %d inserido na posição %d.\n", valor, posicao);
}

// Função para consultar o valor em uma determinada posição da memória
void consultarValor(int *memoria, int posicao) {
    printf("Valor na posição %d: %d\n", posicao, memoria[posicao]);
}

int main() {
    int tamanhoMemoria, opcao, posicao, valor;

    printf("Digite o tamanho da memória (em bytes): ");
    scanf("%d", &tamanhoMemoria);

    int *memoria = alocaMemoria(tamanhoMemoria);

    while (1) {
        printf("\nOpções:\n");
        printf("1. Inserir um valor em uma posição\n");
        printf("2. Consultar o valor em uma posição\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 0:
                free(memoria);
                return 0;
            case 1:
                printf("Digite a posição: ");
                scanf("%d", &posicao);
                printf("Digite o valor: ");
                scanf("%d", &valor);
                inserirValor(memoria, posicao, valor);
                break;
            case 2:
                printf("Digite a posição: ");
                scanf("%d", &posicao);
                consultarValor(memoria, posicao);
                break;
            default:
                printf("Opção inválida.\n");
        }
    }

    return 0;
}


// Questão 7
#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho = 1500;

    int *vetor = (int *)calloc(tamanho, sizeof(int));

    if (vetor == NULL) {
        printf("Erro ao alocar memória.");
        return 1;
    }

    int zeros = 0;
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == 0) {
            zeros++;
        }
    }

    printf("O vetor contém %d valores inicializados com zero.\n", zeros);

    for (int i = 0; i < tamanho; i++) {
        vetor[i] = i;
    }

    printf("\nOs 10 primeiros elementos do vetor são:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    printf("\nOs 10 últimos elementos do vetor são:\n");
    for (int i = tamanho - 10; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);

    return 0;
}


// Questão 8
#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanhoInicial = 5; 
    int tamanhoAtual = tamanhoInicial; 
    int *vetor = (int *)malloc(tamanhoInicial * sizeof(int)); 

    if (vetor == NULL) {
        printf("Erro ao alocar memória.");
        return 1;
    }

    int numero;
    int indice = 0;

    printf("Digite os números (para parar, digite um número negativo):\n");

    while (1) {
        scanf("%d", &numero);

        if (numero < 0) {
            break;
        }

        vetor[indice] = numero;
        indice++;

        if (indice >= tamanhoAtual) {
            tamanhoAtual *= 2; 
            vetor = (int *)realloc(vetor, tamanhoAtual * sizeof(int));

            if (vetor == NULL) {
                printf("Erro ao realocar memória.");
                return 1;
            }
        }
    }

    printf("\nVetor lido:\n");
    for (int i = 0; i < indice; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);

    return 0;
}


// Questão 9
#include <stdio.h>
#include <stdlib.h>

int** alocaMatriz(int linhas, int colunas) {
    int **matriz = (int **)malloc(linhas * sizeof(int *));

    if (matriz == NULL) {
        printf("Erro ao alocar memória para as linhas da matriz.");
        exit(1);
    }

    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int *)malloc(colunas * sizeof(int));

        if (matriz[i] == NULL) {
            printf("Erro ao alocar memória para as colunas da matriz.");
            exit(1);
        }
    }

    return matriz;
}

int valorEstaNaMatriz(int** matriz, int linhas, int colunas, int valor) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (matriz[i][j] == valor) {
                return 1; 
            }
        }
    }

    return 0; 
}

int main() {
    int linhas, colunas;

    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &linhas);
    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &colunas);

    int **matriz = alocaMatriz(linhas, colunas);

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    int valor;

    printf("\nDigite o valor a ser verificado na matriz: ");
    scanf("%d", &valor);

    if (valorEstaNaMatriz(matriz, linhas, colunas, valor)) {
        printf("O valor %d está presente na matriz.\n", valor);
    } else {
        printf("O valor %d não está presente na matriz.\n", valor);
    }

    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}


// Questão 10
#include <stdio.h>
#include <stdlib.h>

float** alocaMatriz(int linhas, int colunas) {
    float **matriz = (float **)malloc(linhas * sizeof(float *));
    if (matriz == NULL) {
        printf("Erro ao alocar memória para as linhas da matriz.\n");
        exit(1);
    }

    for (int i = 0; i < linhas; i++) {
        matriz[i] = (float *)malloc(colunas * sizeof(float));
        if (matriz[i] == NULL) {
            printf("Erro ao alocar memória para as colunas da matriz.\n");
            exit(1);
        }
    }

    return matriz;
}

int main() {
    int linhas, colunas;

    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &linhas);
    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &colunas);

    float **matriz = alocaMatriz(linhas, colunas);

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }

    printf("\nMatriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%.2f\t", matriz[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}


// Questão 11
#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_INICIAL 10
#define PASSO_DE_EXPANSAO 10

int main() {
    int *vetor = (int *)malloc(TAMANHO_INICIAL * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    int tamanhoAtual = TAMANHO_INICIAL;
    int indice = 0;
    int numero;

    printf("Digite os números (para encerrar, digite 0):\n");

    while (1) {
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        vetor[indice++] = numero;

        if (indice >= tamanhoAtual) {
            int *novoVetor = (int *)malloc((tamanhoAtual + PASSO_DE_EXPANSAO) * sizeof(int));
            if (novoVetor == NULL) {
                printf("Erro ao alocar memória.\n");
                free(vetor);
                return 1;
            }

            for (int i = 0; i < tamanhoAtual; i++) {
                novoVetor[i] = vetor[i];
            }

            free(vetor);

            vetor = novoVetor;

            tamanhoAtual += PASSO_DE_EXPANSAO;
        }
    }

    printf("\nVetor lido:\n");
    for (int i = 0; i < indice; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);

    return 0;
}

