// questao 01
#include <stdio.h>

int main()
{
    int notas[5];
    int i, aprovados;

    // Lendo as notas
    printf("Digite as 5 notas dos alunos:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Nota do aluno %d: ", i + 1);
        scanf("%d", &notas[i]);
    }

    // Contando as notas aprovadas
    aprovados = 0;
    for (i = 0; i < 5; i++)
    {
        if (notas[i] >= 7)
        {
            aprovados++;
        }
    }

    // Exibindo o resultado
    printf("Numero de alunos aprovados: %d\n", aprovados);

    return 0;
}

// questao 02
#include <stdio.h>

int main()
{
    int numero, soma = 0, digito;

    // Solicita ao usuário que insira um número inteiro
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Calcula a soma dos dígitos do número
    while (numero != 0)
    {
        digito = numero % 10; // Obtém o último dígito
        soma += digito;       // Adiciona o dígito à soma
        numero /= 10;         // Remove o último dígito do número
    }

    // Exibe a soma dos dígitos
    printf("A soma dos digitos do numero fornecido e: %d\n", soma);

    return 0;
}

// questao 03
#include <stdio.h>

int main()
{
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("Divisores de %d:\n", numero);
    for (int i = 1; i < numero; i++)
    {
        if (numero % i == 0)
        {
            printf("%d ", i);
        }
    }
}

// questao 04
#include <stdio.h>

int main()
{
    int altura[5];
    int soma = 0;
    float media;

    printf("Digite a altura de 5 pessoas: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("Altura da pessoa %d: ", i + 1);
        scanf("%d", &altura[i]);
        soma += altura[i];
    }

    media = (float)soma / 5;

    printf("A media de altura entre as 5 pessoas eh: %.2f\n", media);
}

// questao 05
#include <stdio.h>

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("FizzBuzz ");
        }
        else if (i % 3 == 0)
        {
            printf("Fizz ");
        }
        else if (i % 5 == 0)
        {
            printf("Buzz ");
        }
        else
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

// questao 06
#include <stdio.h>

int main()
{
    int numero, digito, soma = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    while (numero != 0)
    {
        digito = numero % 10; 
        if (digito % 2 == 0)
        {                  
            soma += digito; 
        }
        numero /= 10; 
    }

    printf("A soma dos digitos pares do numero fornecido e: %d\n", soma);

    return 0;
}

// questao 07
#include <stdio.h>

int main() {
    int numero, numeroInvertido = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    while (numero > 0) {
        numeroInvertido = numeroInvertido * 10 + numero % 10;
        numero /= 10;
    }

    printf("Numero invertido: %d\n", numeroInvertido);

    return 0;
}

// questao 08
#include <stdio.h>

int main() {
   int numero = 1;
   int soma = 0;
   
   while (numero <= 100)
   {
      soma = soma + numero;
      numero++;
   }

   printf("A soma dos numeros de 1 a 100 eh: %d\n", soma);
   
   
}

// questao 09
#include <stdio.h>

int main() {
   int numero = 1;
   int produto = 1;

   while (numero <= 5)
   {
      produto = produto * numero;
      numero++;
   }
   
   printf("O produto dos numero de 1 a 5 eh: %d\n", produto);
   
}

// questao 10
#include <stdio.h>

int main() {
   int multiplicador = 1;
   int numero;

   printf("Tabuada do 9:\n");

   while(multiplicador <= 10){
      numero = 9 * multiplicador;
      printf("9 x %d = %d\n", multiplicador, numero);
      multiplicador++;
   }

   
}

// questao 11
#include <stdio.h>

int main() {
    int numero, maior, menor;

    printf("Digite uma sequencia de numeros inteiros (digite 0 para parar):\n");

    scanf("%d", &numero);

    maior = menor = numero;

    while (numero != 0) {
        if (numero > maior) {
            maior = numero;
        }

        if (numero < menor) {
            menor = numero;
        }

        scanf("%d", &numero);
    }

    printf("O maior numero digitado foi: %d\n", maior);
    printf("O menor numero digitado foi: %d\n", menor);

}


// questao 12
#include <stdio.h>

int main() {
    int numero, soma = 0, quantidade = 0;
    double media;

    printf("Digite uma sequencia de numeros inteiros (digite -1 para parar):\n");
    
    while (1) {
        scanf("%d", &numero);
        if (numero == -1) {
            break;
        }
        soma += numero;
        quantidade++;
    }

    if (quantidade > 0) {
        media = (double)soma / quantidade;
        printf("A media dos numeros digitados eh: %.2f\n", media);
    } else {
        printf("Nenhum numero foi digitado.\n");
    }

}

//questao 13
#include <stdio.h>

int main() {
  int numero, soma = 0;
  int digito;

  printf("Digite um número inteiro: ");
  scanf("%d", &numero);

  while (numero > 0) {
    digito = numero % 10;
    soma += digito * digito * digito;
    numero /= 10;
  }

  printf("A soma dos dígitos de %d elevado ao cubo é: %d\n", numero, soma);

  return 0;
}

//questao 14
#include <stdio.h>

int main() {
  
  int numero = 1;

  while (numero <= 100)
  {
   if (numero % 2 != 0)
   {
      printf("%d\n", numero);
   }
   numero++;
   
  }
}
//questao 15
#include <stdio.h>

int main() {
  
  int numero = 1;

  while (numero <= 50)
  {
   if (numero % 3 == 0)
   {
      printf("%d\n", numero);
   }
   numero++;
   
  }
}

//questao 16
#include <stdio.h>

int main() {
  
  int aprovados = 0;
  int i = 0;
  float nota;

  while (i < 5)
  {
    printf("Digite a nota do aluno");
    scanf("%f", &nota);

    if (nota >= 7)
    {
      aprovados++;
    }
    i++;
  }

   printf("%d alunos foram aprovados.\n", aprovados); 
  
}

//questao 17
#include <stdio.h>

int main() {
  int pares = 0;
  int numero;

  while (numero != 0) {
    printf("Digite um número (0 para parar): ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
      pares++;
    }
  }

  printf("Quantidade de números pares antes do primeiro ímpar: %d\n", pares);

  return 0;
}

//questao 18
#include <stdio.h>

int main() {
  int pares = 0, impares = 0, numero;

  while (numero != 0) {
    printf("Digite um número (0 para parar): ");
    scanf("%d", &numero);

    if (numero != 0) { // Evitar contagem dupla do 0
      if (numero % 2 == 0) {
        pares++;
      } else {
        impares++;
      }
    }
  }

  printf("Pares: %d\n", pares);
  printf("Ímpares: %d\n", impares);

  return 0;
}

//questao 19
#include <stdio.h>

int main() {
  int numero;
  int div2 = 0;
  int div3 = 0;
  int div5 = 0;

  printf("Digite um número (0 para parar): ");
    scanf("%d", &numero);

  while (numero != 0)
  {
    printf("Digite um número (0 para parar): ");
    scanf("%d", &numero);

    if (numero != 0)
    {
      if (numero % 2 == 0){
        div2++;
      }
      if (numero % 3 == 0){
        div3++;
      }
      if (numero % 5 == 0){
        div5++;
      }

    printf("Divisíveis por 2: %d\n", div2);
    printf("Divisíveis por 3: %d\n", div3);
    printf("Divisíveis por 5: %d\n", div5);
      
      
    } 
  }
}

//questao 20
#include <stdio.h>

int main() {
  int soma = 0, cont = 0, numero;

  while (numero != 0) {
    printf("Digite um número (0 para parar): ");
    scanf("%d", &numero);

    if (numero != 0) {
      if (numero % 3 == 0) {
        soma += numero;
        cont++;
      }
    }
  }

  if (cont > 0) {
    float media = (float) soma / cont;
    printf("Média dos números divisíveis por 3: %.2f\n", media);
  } else {
    printf("Nenhum número divisível por 3 foi digitado.\n");
  }

  return 0;
}

//questao 21
#include <stdio.h>

int main() {
  int numero, contador = 0;

  printf("Digite uma sequência de números inteiros (0 para parar): ");
    scanf("%d", &numero);

  while (numero != 0) {

    int digitos = 0;
    while (numero > 0) {
      numero /= 10;
      digitos++;
    }

    if (digitos > 3) {
      contador++;
    }
  }

  printf("Existem %d números com mais de três dígitos na sequência.\n", contador);

  return 0;
}

//questao 22
#include <stdio.h>

int main() {
    int numero;
    int soma = 0;
    int contador = 0;

    printf("Digite uma sequência de números inteiros. Digite 0 para parar.\n");

    while (1) {
        printf("Digite um número: ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        if (numero >= 50 && numero <= 100) {
            soma += numero; 
            contador++;    
        }
    }

    if (contador > 0) {
        float media = (float) soma / contador; 
        printf("A média dos números entre 50 e 100 é: %.2f\n", media);
    } else {
        printf("Nenhum número válido foi digitado.\n");
    }

    return 0;
}

//questao 23
#include <stdio.h>

int main() {
    int numero;
    int menor_impar_positivo = -1; 

    printf("Digite uma sequência de números inteiros. Digite 0 para parar.\n");

    while (1) {
        printf("Digite um número: ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        if (numero > 0 && numero % 2 != 0) {

            if (menor_impar_positivo == -1 || numero < menor_impar_positivo) {
                menor_impar_positivo = numero;
            }
        }
    }

    if (menor_impar_positivo != -1) {
        printf("O menor número positivo e ímpar digitado é: %d\n", menor_impar_positivo);
    } else {
        printf("Nenhum número positivo e ímpar foi digitado.\n");
    }

    return 0;
}

//questao 24
#include <stdio.h>

int main() {
    int pares = 0;
    int impares = 0;
    int numero;

    printf("Digite um número (0 para sair): ");
    scanf("%d", &numero);

    while (numero != 0) {
        if (numero % 2 == 0) {
            pares++;
        } else {
            impares++;
        }

        printf("Digite um número (0 para sair): ");
        scanf("%d", &numero);
    }

    printf("Quantidade de números pares: %d\n", pares);
    printf("Quantidade de números ímpares: %d\n", impares);

    return 0;
}
