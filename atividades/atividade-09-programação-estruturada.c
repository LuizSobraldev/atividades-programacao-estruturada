// questao 1
#include <stdio.h>

int encontrar_maior_elemento(int vetor[], int tamanho){
    int maior = vetor[0];
    for (int i = 1; i < tamanho; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[1];
        }

    }
    return maior;
}


int main(){
    int TAMANHO = 10;
    int vetor[TAMANHO];

    printf("Digite os %d elementos do vetor:\n", TAMANHO);
    for (int i = 0; i < TAMANHO; i++)
    {
        printf("Elemento %d:  \n", i + 1);
        scanf("%d", &vetor[1]);
    }

    int maiorElemento = encontrar_maior_elemento(vetor, TAMANHO);

    printf("O maior elemento do vetor eh: %d\n", maiorElemento);

    return 0;

}

// questao 2
#include <stdio.h>

int encontrarMenorElemento(int vetor[], int tamanho) {
    int menor = vetor[0];
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }
    return menor;
}

int main() {
    int vetor[10];

    printf("Digite os 10 elementos do vetor:\n");
    for (int i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    int menorElemento = encontrarMenorElemento(vetor, 10);

    printf("O menor elemento do vetor é: %d\n", menorElemento);

    return 0;
}
// questao 3
#include <stdio.h>

int main(){

    int vetor[10];
    int maior, posicao;

    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < 10; ++i) {
        printf("Número: %d", i + 1);
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    posicao = 0;

    for (int i = 1; i < 10; ++i) {
        if(vetor[i] > maior){
            maior = vetor[1];
            posicao = i;
        }
    }

    printf("O maior elemento do vetor é: %d\n", maior);
    printf("Ele está na posição:: %d\n", posicao + 1);
}

//questao 4
#include <stdio.h>

int main(){

    int valores[5];
    float maior;
    float menor;
    int posicao_maior = 0;
    int posicao_menor = 0;

    for (int i = 0; i < 5; ++i) {
        printf("Digite o %d valor:  \n", i + 1);
        scanf("%d", &valores[i]);

        if (i == 0){
            maior = valores[i];
            menor = valores[i];
        }else{
            if(valores[i] > maior){
                maior = valores[i];
                posicao_maior = i;
            }
            if(valores[i] < menor){
                menor = valores[i];
                posicao_menor = i;
            }

        }
    }

    printf("A posição do maior valor (%.2f) eh: %d\n", maior, posicao_maior + 1);
    printf("A posição do menor valor (%.2f) eh: %d\n", menor, posicao_menor + 1);

    return 0;

}

//questao 5
#include <stdio.h>

int main() {
    int vetor[10];
    int i, j;
    int valores_iguais = 0;
    int valores_digitados = 0;

    printf("Digite os 10 valores do vetor:\n");
    for (i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
        valores_digitados++;
    }

    printf("Valores iguais encontrados:\n");
    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) {
            if (vetor[i] == vetor[j]) {
                printf("%d\n", vetor[i]);
                valores_iguais = 1;
            }
        }
    }

    if (valores_digitados == 0) {
        printf("Nenhum valor foi digitado.\n");
    }

    if (valores_iguais == 0) {
        printf("Nenhum valor igual encontrado.\n");
    }

    return 0;
}
