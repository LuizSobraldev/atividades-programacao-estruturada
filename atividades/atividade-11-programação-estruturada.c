// questao 01
#include <stdio.h>
int main()
{
    int matriz[4][4];
    int i, j, count = 0;

    printf("Digite os valores da matriz 4x4:\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (matriz[i][j] > 10)
            {
                count++;
            }
        }
    }

    printf("A matriz possui %d valores maiores que 10.\n", count);

    return 0;
}

//questao 02
#include <stdio.h>

int main() {
    int matriz[5][5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == j) {
                matriz[i][j] = 1;
            } else {
                matriz[i][j] = 0;
            }
        }
    }

    printf("Matriz obtida:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

//questao 03
#include <stdio.h>

#define SIZE 4 

int main() {
    int matriz[SIZE][SIZE];

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            matriz[i][j] = (i + 1) * (j + 1); 
        }
    }

    printf("Matriz preenchida com o produto dos índices da linha e da coluna:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

//questao 04
#include <stdio.h>

#define SIZE 4 // Definindo o tamanho da matriz como 4x4

// Função para encontrar a localização do maior valor na matriz
void localizaMaiorValor(int matriz[SIZE][SIZE], int *linhaMaior, int *colunaMaior) {
    int maiorValor = matriz[0][0];
    *linhaMaior = 0;
    *colunaMaior = 0;

    // Percorre a matriz para encontrar o maior valor e sua localização
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (matriz[i][j] > maiorValor) {
                maiorValor = matriz[i][j];
                *linhaMaior = i;
                *colunaMaior = j;
            }
        }
    }
}

int main() {
    int matriz[SIZE][SIZE];
    int linhaMaior, colunaMaior;

    printf("Digite os elementos da matriz 4x4:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Matriz digitada:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    localizaMaiorValor(matriz, &linhaMaior, &colunaMaior);

    printf("O maior valor na matriz está na linha %d e na coluna %d.\n", linhaMaior + 1, colunaMaior + 1);

    return 0;
}

//questao 05
#include <stdio.h>

#define SIZE 5 

void buscaValor(int matriz[SIZE][SIZE], int valor, int *linhaEncontrada, int *colunaEncontrada, int *encontrado) {
    *encontrado = 0; 

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (matriz[i][j] == valor) {
                *linhaEncontrada = i;
                *colunaEncontrada = j;
                *encontrado = 1; 
                return; 
            }
        }
    }
}

int main() {
    int matriz[SIZE][SIZE];
    int valorX, linhaEncontrada, colunaEncontrada, encontrado;

    printf("Digite os elementos da matriz 5x5:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Digite o valor a ser buscado na matriz: ");
    scanf("%d", &valorX);

    buscaValor(matriz, valorX, &linhaEncontrada, &colunaEncontrada, &encontrado);

    if (encontrado) {
        printf("O valor %d foi encontrado na linha %d e na coluna %d da matriz.\n", valorX, linhaEncontrada + 1, colunaEncontrada + 1);
    } else {
        printf("O valor %d não foi encontrado na matriz.\n", valorX);
    }

    return 0;
}

//questao 06
#include <stdio.h>

#define SIZE 4 

void maioresValores(int matriz1[SIZE][SIZE], int matriz2[SIZE][SIZE], int matrizResultante[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            matrizResultante[i][j] = (matriz1[i][j] > matriz2[i][j]) ? matriz1[i][j] : matriz2[i][j];
        }
    }
}

void imprimirMatriz(int matriz[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz1[SIZE][SIZE], matriz2[SIZE][SIZE], matrizResultante[SIZE][SIZE];

    printf("Digite os elementos da primeira matriz 4x4:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("Digite os elementos da segunda matriz 4x4:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }

    maioresValores(matriz1, matriz2, matrizResultante);

    printf("Matriz com os maiores valores de cada posição:\n");
    imprimirMatriz(matrizResultante);

    return 0;
}

//questao 07
#include <stdio.h>

#define SIZE 10 

int main() {
    int matriz[SIZE][SIZE];

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (i < j) {
                matriz[i][j] = 2 * i + 7 * j;
            } else if (i == j) {
                matriz[i][j] = 3 * i * i;
            } else {
                matriz[i][j] = 5 * j * j + 1;
            }
        }
    }

    printf("Matriz gerada:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

//questao 08
#include <stdio.h>

#define SIZE 3 

int main() {
    int matriz[SIZE][SIZE];
    int soma = 0;

    printf("Digite os elementos da matriz %dx%d:\n", SIZE, SIZE);
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < SIZE; i++) {
        for (int j = i + 1; j < SIZE; j++) { 
            soma += matriz[i][j];
        }
    }

    printf("A soma dos elementos acima da diagonal principal é: %d\n", soma);

    return 0;
}

//questao 09
#include <stdio.h>

#define SIZE 3 

int main() {
    int matriz[SIZE][SIZE];
    int soma = 0;

    printf("Digite os elementos da matriz %dx%d:\n", SIZE, SIZE);
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < i; j++) { 
            soma += matriz[i][j];
        }
    }

    printf("A soma dos elementos abaixo da diagonal principal é: %d\n", soma);

    return 0;
}

//questao 10
#include <stdio.h>

#define SIZE 3 

int main() {
    int matriz[SIZE][SIZE];
    int soma = 0;

    printf("Digite os elementos da matriz %dx%d:\n", SIZE, SIZE);
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < SIZE; i++) {
        soma += matriz[i][i];
    }

    printf("A soma dos elementos na diagonal principal é: %d\n", soma);

    return 0;
}

//questao 11
#include <stdio.h>

#define SIZE 3 

int main() {
    int matriz[SIZE][SIZE];
    int soma = 0;

    printf("Digite os elementos da matriz %dx%d:\n", SIZE, SIZE);
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < SIZE; i++) {
        soma += matriz[i][SIZE - 1 - i];
    }

    printf("A soma dos elementos na diagonal secundária é: %d\n", soma);

    return 0;
}


//questao 12
#include <stdio.h>

#define SIZE 3 

int main() {
    int matriz[SIZE][SIZE];
    int transposta[SIZE][SIZE];

    printf("Digite os elementos da matriz %dx%d:\n", SIZE, SIZE);
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            transposta[i][j] = matriz[j][i];
        }
    }

    printf("A transposta da matriz é:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d\t", transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}

//questao 13
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 4 

int main() {
    int matriz[SIZE][SIZE];

    srand(time(NULL));

    printf("Matriz original:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            matriz[i][j] = rand() % 20 + 1;
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < SIZE; i++) {
        for (int j = i + 1; j < SIZE; j++) { 
            matriz[i][j] = 0;
        }
    }

    printf("\nMatriz transformada (triangular inferior):\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

//questao 14
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 5 
int main() {
    int cartela[SIZE][SIZE];
    int numeros[100] = {0}; 
    int num_gerados = 0;

    srand(time(NULL));

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            int num;
            do {
                num = rand() % 100; 
            } while (numeros[num] != 0); 
            cartela[i][j] = num;
            numeros[num] = 1; 
            num_gerados++;
        }
    }

    printf("Cartela de Bingo:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%2d\t", cartela[i][j]);
        }
        printf("\n");
    }

    return 0;
}

//questao 15
#include <stdio.h>

#define ALUNOS 5
#define QUESTOES 10

int main() {
    char gabarito[QUESTOES] = {'a', 'b', 'c', 'a', 'd', 'b', 'c', 'a', 'd', 'c'};

    char respostas[ALUNOS][QUESTOES];
   
    printf("Digite as respostas dos %d alunos (a, b, c ou d):\n", ALUNOS);
    for (int i = 0; i < ALUNOS; i++) {
        printf("Aluno %d: ", i + 1);
        for (int j = 0; j < QUESTOES; j++) {
            scanf(" %c", &respostas[i][j]); 
        }
    }

    int resultados[ALUNOS] = {0}; 
    for (int i = 0; i < ALUNOS; i++) {
        for (int j = 0; j < QUESTOES; j++) {
            if (respostas[i][j] == gabarito[j]) {
                resultados[i]++; 
            }
        }
    }

    printf("\nResultados dos alunos:\n");
    for (int i = 0; i < ALUNOS; i++) {
        printf("Aluno %d: %d pontos\n", i + 1, resultados[i]);
    }

    return 0;
}

//questao 16
#include <stdio.h>

#define ALUNOS 10
#define PROVAS 3

int main() {
    int notas[ALUNOS][PROVAS];

    printf("Digite as notas dos %d alunos em %d provas:\n", ALUNOS, PROVAS);
    for (int i = 0; i < ALUNOS; i++) {
        printf("Aluno %d:\n", i + 1);
        for (int j = 0; j < PROVAS; j++) {
            printf("Nota da prova %d: ", j + 1);
            scanf("%d", &notas[i][j]);
        }
    }

    int pior_nota_prova1 = notas[0][0], pior_nota_prova2 = notas[0][1], pior_nota_prova3 = notas[0][2];

    for (int i = 1; i < ALUNOS; i++) {
        if (notas[i][0] < pior_nota_prova1) {
            pior_nota_prova1 = notas[i][0];
        }
        if (notas[i][1] < pior_nota_prova2) {
            pior_nota_prova2 = notas[i][1];
        }
        if (notas[i][2] < pior_nota_prova3) {
            pior_nota_prova3 = notas[i][2];
        }
    }

    int alunos_pior_prova1 = 0, alunos_pior_prova2 = 0, alunos_pior_prova3 = 0;
    for (int i = 0; i < ALUNOS; i++) {
        if (notas[i][0] == pior_nota_prova1) {
            alunos_pior_prova1++;
        }
        if (notas[i][1] == pior_nota_prova2) {
            alunos_pior_prova2++;
        }
        if (notas[i][2] == pior_nota_prova3) {
            alunos_pior_prova3++;
        }
    }

    printf("\nNúmero de alunos com a pior nota na prova 1: %d\n", alunos_pior_prova1);
    printf("Número de alunos com a pior nota na prova 2: %d\n", alunos_pior_prova2);
    printf("Número de alunos com a pior nota na prova 3: %d\n", alunos_pior_prova3);

    return 0;
}

//questao 17
#include <stdio.h>

#define ROWS 3
#define COLS 3

int main() {
    int matriz[ROWS][COLS];
    int soma_colunas[COLS] = {0};

    printf("Digite os elementos da matriz %dx%d:\n", ROWS, COLS);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%d", &matriz[i][j]);
            soma_colunas[j] += matriz[i][j]; 
        }
    }

    printf("\nSoma das colunas da matriz:\n");
    for (int i = 0; i < COLS; i++) {
        printf("%d ", soma_colunas[i]);
    }
    printf("\n");

    return 0;
}

//questao 18
#include <stdio.h>

#define ROWS 5
#define COLS 4

int main() {
    int matriz[ROWS][COLS];
    float media_provas, media_trabalhos, nota_final, maior_nota_final = 0;
    int matricula_maior_nota_final;

    printf("Digite as informações dos alunos:\n");
    for (int i = 0; i < ROWS; i++) {
        printf("Aluno %d:\n", i + 1);
        for (int j = 0; j < COLS; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < ROWS; i++) {
        media_provas = matriz[i][1];
        media_trabalhos = matriz[i][2];
        nota_final = media_provas + media_trabalhos;
        
        if (nota_final > maior_nota_final) {
            maior_nota_final = nota_final;
            matricula_maior_nota_final = matriz[i][0];
        }
        
        matriz[i][3] = nota_final; 
    }

    printf("\nMatrícula do aluno com maior nota final: %d\n", matricula_maior_nota_final);

    float soma_notas_finais = 0;
    for (int i = 0; i < ROWS; i++) {
        soma_notas_finais += matriz[i][3];
    }
    float media_notas_finais = soma_notas_finais / ROWS;

    printf("Média aritmética das notas finais: %.2f\n", media_notas_finais);

    return 0;
}

//questao 19
#include <stdio.h>

#define ROWS 3
#define COLS 6

int main() {
    float matriz[ROWS][COLS];
    float soma_colunas_impares = 0, media_segunda_quarta_colunas = 0, soma_col1_e_col2 = 0;

    printf("Digite os elementos da matriz %dx%d:\n", ROWS, COLS);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%f", &matriz[i][j]);
        }
    }

    printf("\nSoma dos elementos das colunas ímpares:\n");
    for (int j = 0; j < COLS; j += 2) {
        for (int i = 0; i < ROWS; i++) {
            soma_colunas_impares += matriz[i][j];
        }
        printf("Coluna %d: %.2f\n", j + 1, soma_colunas_impares);
        soma_colunas_impares = 0;
    }

    for (int i = 0; i < ROWS; i++) {
        media_segunda_quarta_colunas += matriz[i][1] + matriz[i][3];
    }
    media_segunda_quarta_colunas /= (ROWS * 2);

    printf("\nMédia aritmética dos elementos das segunda e quarta colunas: %.2f\n", media_segunda_quarta_colunas);

    for (int i = 0; i < ROWS; i++) {
        soma_col1_e_col2 += matriz[i][0] + matriz[i][1];
    }
    for (int i = 0; i < ROWS; i++) {
        matriz[i][5] = soma_col1_e_col2;
    }

    printf("\nMatriz modificada:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%.2f\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

//questao 20
#include <stdio.h>

#define ROWS 2
#define COLS 2

void soma_matrizes(float matriz1[ROWS][COLS], float matriz2[ROWS][COLS], float resultado[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

void subtrair_matrizes(float matriz1[ROWS][COLS], float matriz2[ROWS][COLS], float resultado[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            resultado[i][j] = matriz1[i][j] - matriz2[i][j];
        }
    }
}

void adicionar_constante(float matriz[ROWS][COLS], float constante) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            matriz[i][j] += constante;
        }
    }
}

void imprimir_matriz(float matriz[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%.2f\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    float matriz1[ROWS][COLS], matriz2[ROWS][COLS], resultado[ROWS][COLS];
    float constante;
    char opcao;

    printf("Digite os elementos da primeira matriz %dx%d:\n", ROWS, COLS);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%f", &matriz1[i][j]);
        }
    }

    printf("Digite os elementos da segunda matriz %dx%d:\n", ROWS, COLS);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%f", &matriz2[i][j]);
        }
    }

    printf("\nEscolha uma opção:\n");
    printf("a. Somar as duas matrizes\n");
    printf("b. Subtrair a segunda matriz da primeira\n");
    printf("c. Adicionar uma constante a ambas as matrizes\n");
    printf("d. Imprimir as matrizes\n");
    scanf(" %c", &opcao);

    switch (opcao) {
        case 'a':
            soma_matrizes(matriz1, matriz2, resultado);
            printf("Resultado da soma das matrizes:\n");
            imprimir_matriz(resultado);
            break;
        case 'b':
            subtrair_matrizes(matriz1, matriz2, resultado);
            printf("Resultado da subtração das matrizes:\n");
            imprimir_matriz(resultado);
            break;
        case 'c':
            printf("Digite a constante a ser adicionada às matrizes: ");
            scanf("%f", &constante);
            adicionar_constante(matriz1, constante);
            adicionar_constante(matriz2, constante);
            printf("Matriz 1 após adicionar a constante:\n");
            imprimir_matriz(matriz1);
            printf("\nMatriz 2 após adicionar a constante:\n");
            imprimir_matriz(matriz2);
            break;
        case 'd':
            printf("Matriz 1:\n");
            imprimir_matriz(matriz1);
            printf("\nMatriz 2:\n");
            imprimir_matriz(matriz2);
            break;
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}

//questao 21
#include <stdio.h>

#define SIZE 3

void multiplicar_matrizes(int matrizA[SIZE][SIZE], int matrizB[SIZE][SIZE], int resultado[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            resultado[i][j] = 0; 
            for (int k = 0; k < SIZE; k++) {
                resultado[i][j] += matrizA[i][k] * matrizB[k][j]; 
            }
        }
    }
}

void imprimir_matriz(int matriz[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrizA[SIZE][SIZE], matrizB[SIZE][SIZE], resultado[SIZE][SIZE];

    printf("Digite os elementos da matriz A %dx%d:\n", SIZE, SIZE);
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &matrizA[i][j]);
        }
    }

    printf("Digite os elementos da matriz B %dx%d:\n", SIZE, SIZE);
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &matrizB[i][j]);
        }
    }

    multiplicar_matrizes(matrizA, matrizB, resultado);

    printf("Resultado da multiplicação das matrizes A e B:\n");
    imprimir_matriz(resultado);

    return 0;
}

//questao 22
#include <stdio.h>

#define SIZE 3

void quadrado_matriz(int matrizA[SIZE][SIZE], int resultado[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            resultado[i][j] = matrizA[i][j] * matrizA[i][j];
        }
    }
}

void imprimir_matriz(int matriz[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrizA[SIZE][SIZE], resultado[SIZE][SIZE];

    printf("Digite os elementos da matriz A %dx%d:\n", SIZE, SIZE);
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &matrizA[i][j]);
        }
    }

    quadrado_matriz(matrizA, resultado);

    printf("Resultado do quadrado da matriz A:\n");
    imprimir_matriz(resultado);

    return 0;
}
