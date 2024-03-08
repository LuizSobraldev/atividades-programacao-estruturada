//questao 01
//letra a
#include <stdio.h>

int main(){
    char c = 'a';
    char *ponteiro_pc = &c;

    printf("Endereço de c: %p\n", &c);
    printf("O valor guardado por c: %c", c);    
}

//letra b
#include <stdio.h>

int main(){
    char c = 'a';
    char *ponteiro_pc = &c;

    printf("O valor de pc é: %c\n", *ponteiro_pc);
    printf("O valor guardado no endereço apontado por ele é: %p ", &c);
}

//letra c
#include <stdio.h>

int main(){
    char c = 'a';
    char *ponteiro_pc = &c;

    printf("O endereco de pc eh: %p", &ponteiro_pc);
}

//questao02
#include <stdio.h>

int main(){
    int numero = 10;
    float num = 3.14;
    char c = 'a';

    int *ponteiro_numero = &numero;
    float *ponteiro_num = &num;
    char *ponteiro_char = &c;

    printf("Valores antes da modificacao:\n");
    printf("numero: %d\n", numero);
    printf("num: %.2f\n", num);
    printf("c: %c\n", c);

    *ponteiro_numero = 100;
    *ponteiro_num = 1.10;
    *ponteiro_char = 'Z';

    printf("\nValores apos a modificacao:\n");
    printf("numero: %d\n", numero);
    printf("num: %.2f\n", num);
    printf("c: %c\n", c);
}

//questao03
#include <stdio.h>

int main(){
    int valor1;
    int valor2;

    int *ponteiro_valor1 = &valor1;
    int *ponteiro_valor2 = &valor2;


    printf("Digite um numero: ");
    scanf("%d", &valor1);

    printf("Digite outro numero: ");
    scanf("%d", &valor2);

    printf("O endereco de memoria do primeiro numero eh: %p\n", (void *) &ponteiro_valor1);
    printf("O endereco de memoria do segundo numero eh: %p\n", (void *) &ponteiro_valor2);

}

//questao04
#include <stdio.h>

void trocarvalores(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}


int main(){
    
    int valor1;
    int valor2;

    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &valor2);

    printf("\nValores antes da troca:\n");
    printf("valor 1: %d\n", valor1);
    printf("valor 2: %d\n", valor2);

    trocarvalores(&valor1, &valor2);

    printf("\nValores depois da troca\n");
    printf("valor 1: %d\n", valor1);
    printf("valor 2: %d\n", valor2);

}

//questao05
#include <stdio.h>

int somarDobro(int a, int b){
    a = 2 * a;
    b = 2 * b;

    return a + b;
}

int main(){
    
    int valor1;
    int valor2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &valor1);

    printf("Digite o segundo numero: ");
    scanf("%d", &valor2);


    int resultado = somarDobro(valor1, valor2);

    printf("A soma do dobro dos numeros digitados eh: %d\n",resultado);

}