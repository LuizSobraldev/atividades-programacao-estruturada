//questao 01
#include <stdio.h>

int soma_ate_n(int numero){
    if(numero == 0){
        return 1;
    }
    else{
         return numero + soma_ate_n(numero - 1);
         }
         
}


int main() {
    
    int numero;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    int resultado = soma_ate_n(numero);
    
    printf("A soma dos numeros de 1 ate %d eh igual a %d\n", numero, resultado);

    return 0;
}

//questao 02
#include <stdio.h>

int fatorial(int N){
    if (N == 0 || N == 1)
    {
        return 1;
    }else{
        return N * fatorial(N - 1);
    }
    
}


int main(){
    int numero;
    int resultado;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    resultado = fatorial(numero);

    printf("O fatorial de %d eh %d\n", numero, resultado);
    
    return 0;
}

//questao 03
#include <stdio.h>

int fibonacci(int N){
    if (N == 0)
    {
        return 0;
    }else if (N == 1)
    {
        return 1;
    }else{
        return fibonacci(N - 1) + fibonacci(N - 2);
    }
    
    
}


int main(){
    int numero;
    int resultado;

    printf("Digite o valor de N para encontrar o N-esimo termo da sequência de Fibonacci: ");
    scanf("%d", &numero);

    resultado = fibonacci(numero);

    printf("O %d-ésimo termo da sequência de Fibonacci é: %d\n", numero, resultado);
    return 0;
}

//questao 04
#include <stdio.h>

int imprimir_numeros_naturais(int n) {
    if (n == 0) {
        printf("%d ", n);
        return;
    }
    imprimir_numeros_naturais(n - 1);
    printf("%d ", n);
}

int main() {
    int n;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    printf("Os numeros naturais de 0 até %d em ordem crescente sao:\n", n);
    imprimir_numeros_naturais(n);
    printf("\n");

    return 0;
}

//questao 05
#include <stdio.h>

int imprimir_numeros_naturais(int n) {
    if (n == 0) {
        printf("%d ", n);
        return;
    }
    printf("%d ", n);
    imprimir_numeros_naturais(n - 1);
}

int main() {
    int n;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    printf("Os numeros naturais de %d até 0 em ordem decrescente sao:\n", n);
    imprimir_numeros_naturais(n);
    printf("\n");

    return 0;
}
