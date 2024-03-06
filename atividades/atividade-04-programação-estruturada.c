// questao 01
#include <stdio.h>

int main()
{
   int number;
   printf("Digite um numero inteiro: ");
   scanf("%d", &number);

   if (number > 10)
   {
      printf("O valor eh maior que 10\n");
   }
   else if (number == 10)
   {
      printf("O numero eh igual a 10\n");
   }
   else
   {
      printf("O valor eh menor que 10\n");
   }

   return 0;
}

// questao 02
#include <stdio.h>
#include <stdlib.h>

int main()
{
   char ch;

   printf("Digite um simbolo de pontuação: ");
   ch = getchar();

   switch (ch)
   {
   case '.':
      printf("Ponto.\n");
      break;
   case ',':
      printf("Virgula.\n");
      break;
   case ':':
      printf("Dois pontos.\n");
      break;
   case ';':
      printf("Ponto e virgula.\n");
      break;

   default:
      printf("Nao eh pontuacao.\n");
      break;

      system("pause");
      return 0;
   }
}

// questao 03
#include <stdio.h>
#include <stdlib.h>

int main()
{

   int num_inteiro;

   printf("Digite um numero inteiro: ");
   scanf("%d", &num_inteiro);

   if (num_inteiro > 0)
   {
      printf("O numero que voce digitou eh %d portanto eh positivo.\n", num_inteiro);
   }
   else if (num_inteiro == 0)
   {
      printf("O numero que voce digitou foi %d portanto eh igual a zero.\n", num_inteiro);
   }
   else
   {
      printf("O numero que voce digitou eh %d portanto eh negativo.\n", num_inteiro);
   }
}

// questao 04
#include <stdio.h>
#include <stdlib.h>

int main()
{

   int idade;

   printf("Qual a sua idade: ");
   scanf("%d", &idade);

   if (idade >= 18)
   {
      printf("Voce eh maior de idade!");
   }
   else
   {
      printf("Voce eh menor de idade!");
   }
}

// questao 05
#include <stdio.h>
#include <stdlib.h>

int main()
{

   int num1;
   int num2;

   printf("Digite o primeiro numero: ");
   scanf("%d", &num1);

   printf("Digite o segundo numero: ");
   scanf("%d", &num2);

   if (num1 > num2)
   {
      printf("O numero maior foi o %d.\n", num1);
   }
   else if (num2 > num1)
   {
      printf("O numero maior foi o %d.\n", num2);
   }
   else
   {
      printf("Eles sao iguais!");
   }
}

// questao 06
#include <stdio.h>
#include <stdlib.h>

int main()
{

   int numero;

   printf("Digite um numero: ");
   scanf("%d", &numero);

   if (numero % 2 == 0)
   {
      printf("O numero que voce digitou eh par!");
   }
   else
   {
      printf("O numero que voce digitou eh impar!");
   }
}

// questao 07
#include <stdio.h>
#include <stdlib.h>

int main()
{

   int nota1;
   int nota2;
   int nota3;
   int calcularMedia;

   printf("Digite a primeira nota: ");
   scanf("%d", &nota1);

   printf("Digite a segunda nota: ");
   scanf("%d", &nota2);

   printf("Digite a terceira nota: ");
   scanf("%d", &nota3);

   calcularMedia = (nota1 + nota2 + nota3) / 3;

   if (calcularMedia >= 7)
   {
      printf("A media foi: %d portanto o aluno esta aprovado! ", calcularMedia);
   }
   else
   {
      printf("A media foi: %d portanto o aluno esta reprovado! ", calcularMedia);
   }
}

// questao 08
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

   char nome1[20];
   char nome2[20];
   int tamanho_nome1;
   int tamanho_nome2;

   printf("Digite um nome de uma pessoa: ");
   scanf("%s", nome1);

   printf("Digite um nome de uma outra pessoa: ");
   scanf("%s", nome2);

   tamanho_nome1 = strlen(nome1);
   tamanho_nome2 = strlen(nome2);

   if (tamanho_nome1 > tamanho_nome2)
   {
      printf("O nome de %s tem mais caracteres do que o nome de %s.\n", nome1, nome2);
   }
   else if (tamanho_nome2 > tamanho_nome1)
   {
      printf("O nome de %s tem mais caracteres do que o nome de %s.\n", nome2, nome1);
   }
   else
   {
      printf("Os nomes tem o mesmo numero de caracteres.\n");
   }
}

// questao 09
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

   char caracter;

   printf("Digite um caracter: ");
   scanf("%c", &caracter);

   if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u' ||
       caracter == 'A' || caracter == 'E' || caracter == 'I' || caracter == 'O' || caracter == 'U')
   {
      printf("O caracter digitado '%c' eh uma vogal", caracter);
   }
   else if ((caracter > 'a' && caracter <= 'z') || (caracter > 'A' && caracter <= 'Z'))
   {
      printf("O caracter digitado '%c' eh uma consoante: ", caracter);
   }
   else
   {
      printf("O caracter digitado '%c' nao eh uma letra do alfabeto. ");
   }
}

// questao 10
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

   int num1;
   int num2;
   int num3;
   int mudarOrdem;

   printf("Digite o primeiro numero! ");
   scanf("%d", &num1);

   printf("Digite o segundo numero! ");
   scanf("%d", &num2);

   printf("Digite o terceiro numero! ");
   scanf("%d", &num3);

   if (num1 > num2)
   {
      mudarOrdem = num1;
      num1 = num2;
      num2 = mudarOrdem;
   }

   if (num2 > num3)
   {
      mudarOrdem = num2;
      num2 = num3;
      num3 = mudarOrdem;
   }

   if (num1 > num2)
   {
      mudarOrdem = num1;
      num1 = num2;
      num2 = mudarOrdem;
   }

   printf("Os numeros em ordem crescente sao: %d, %d, %d\n", num1, num2, num3);
}

// questao 11
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

   float peso;
   float altura;
   float IMC;

   printf("Digite qual o seu peso: ");
   scanf("%f", &peso);

   printf("Digite qual a sua altura: ");
   scanf("%f", &altura);

   IMC = peso / (altura * altura);

   if (IMC >= 17 && IMC <= 18.49)
   {
      printf("Seu numero deu %.2f portanto voce esta abaixo do peso. \n", IMC);
   }
   else if (IMC >= 18.5 && IMC <= 24.99)
   {
      printf("Seu numero deu %.2f portanto voce esta no peso ideal. \n", IMC);
   }
   else if (IMC >= 25 && IMC <= 29.99)
   {
      printf("Seu numero deu %.2f portanto voce esta no sobrepeso. \n", IMC);
   }
   else if (IMC >= 30 && IMC <= 34.99)
   {
      printf("Seu numero deu %.2f portanto voce esta no grau de obesidade 1. \n", IMC);
   }
   else if (IMC >= 35 && IMC <= 39.99)
   {
      printf("Seu numero deu %.2f portanto voce esta no grau de obesidade 2. \n", IMC);
   }
   else
   {
      printf("Seu numero deu %.2f portanto voce esta no grau de obesidade 3(morbida). \n", IMC);
   }
}

// questao 12
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

   int numero_mes;

   printf("Digite o numero equivalente ao mes desejado: ");
   scanf("%d", &numero_mes);

   if (numero_mes == 1)
   {
      printf("O numero que voce digitou eh equivalente ao mes de Janeiro");
   }
   else if (numero_mes == 2)
   {
      printf("O numero que voce digitou eh equivalente ao mes de Fevereiro");
   }
   else if (numero_mes == 3)
   {
      printf("O numero que voce digitou eh equivalente ao mes de Marco");
   }
   else if (numero_mes == 4)
   {
      printf("O numero que voce digitou eh equivalente ao mes de Abril");
   }
   else if (numero_mes == 5)
   {
      printf("O numero que voce digitou eh equivalente ao mes de Maio");
   }
   else if (numero_mes == 6)
   {
      printf("O numero que voce digitou eh equivalente ao mes de Junho");
   }
   else if (numero_mes == 7)
   {
      printf("O numero que voce digitou eh equivalente ao mes de Julho");
   }
   else if (numero_mes == 8)
   {
      printf("O numero que voce digitou eh equivalente ao mes de Agosto");
   }
   else if (numero_mes == 9)
   {
      printf("O numero que voce digitou eh equivalente ao mes de Setembro");
   }
   else if (numero_mes == 10)
   {
      printf("O numero que voce digitou eh equivalente ao mes de Outubro");
   }
   else if (numero_mes == 11)
   {
      printf("O numero que voce digitou eh equivalente ao mes de Novembro");
   }
   else
   {
      printf("O numero que voce digitou eh equivalente ao mes de Dezembro");
   }
}

// questao 13
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

   float salario;
   float novo_salario;
   float aumento;

   printf("Digite qual o seu salario: ");
   scanf("%f", &salario);

   if (salario > 1500)
   {
      aumento = salario * 0.10;
   }
   else
   {
      aumento = salario * 0.15;
   }

   novo_salario = salario + aumento;

   printf("O valor do aumento é: R$ %.2f\n", aumento);
   printf("O novo salário é: R$ %.2f\n", novo_salario);
}

// questao 14
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

   int number;

   printf("Digite um numero: ");
   scanf("%d", &number);

   if (number % 3 == 0 && number % 5 == 0)
   {
      printf("O numero que voce digitou eh divisivel por 3 e 5.\n");
   }
   else
   {
      printf("O numero que voce digitou nao eh divisivel por 3 e 5");
   }
}

// questao 15
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

   char diaDaSemana[20];

   printf("Digite o dia da semana: ");
   scanf("%s", diaDaSemana);

   if (strcmp(diaDaSemana, "segunda") == 0 || strcmp(diaDaSemana, "Segunda") == 0 ||
       strcmp(diaDaSemana, "terca") == 0 || strcmp(diaDaSemana, "Terca") == 0 ||
       strcmp(diaDaSemana, "quarta") == 0 || strcmp(diaDaSemana, "Quarta") == 0 ||
       strcmp(diaDaSemana, "quinta") == 0 || strcmp(diaDaSemana, "Quinta") == 0 ||
       strcmp(diaDaSemana, "sexta") == 0 || strcmp(diaDaSemana, "Sexta") == 0)
   {
      printf("O dia que voce digitou foi %s, portanto eh dia util.\n", diaDaSemana);
   }
   else if (strcmp(diaDaSemana, "sabado") == 0 || strcmp(diaDaSemana, "Sabado") == 0 ||
            strcmp(diaDaSemana, "domingo") == 0 || strcmp(diaDaSemana, "Domingo") == 0)
   {
      printf("O dia que voce digitou foi %s, portanto eh final de semana.\n", diaDaSemana);
   }
   else
   {
      printf("Dia invalido!\n");
   }
}

// questao 16
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

   int number;

   printf("Digite um numero de 1 a 5: ");
   scanf("%d", &number);

   switch (number)
   {
   case 1:
      printf("Muito insuficiente");
      break;
   case 2:
      printf("Insuficiente");
      break;
   case 3:
      printf("Regular");
      break;
   case 4:
      printf("Bom");
      break;
   case 5:
      printf("Muito bom");
      break;

   default:
      printf("Digite um numero de 1 a 5: ");
      break;
   }
}

// questao 17
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

   int number;

   printf("Digite um numero de 1 a 7: ");
   scanf("%d", &number);

   switch (number)
   {
   case 1:
      printf("domingo");
      break;
   case 2:
      printf("segunda");
      break;
   case 3:
      printf("terca");
      break;
   case 4:
      printf("quarta");
      break;
   case 5:
      printf("quinta");
      break;
   case 6:
      printf("sexta");
      break;
   case 7:
      printf("sabado");
      break;

   default:
      printf("Digite um numero de 1 a 7: ");
      break;
   }
}

// questao 18
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

   double number;
   int arredondar;

   printf("Digite um numero: ");
   scanf("%lf", &number);

   arredondar = round(number);

   printf("O numero arredondado mais proximo eh: %d.\n", arredondar);
}

// questao 19
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

   int idade;

   printf("Digite sua idade: ");
   scanf("%d", &idade);

   if (idade <= 1)
   {
      printf("Ele eh um bebe!");
   }
   else if (idade > 1 && idade <= 12)
   {
      printf("Ele eh crianca!");
   }
   else if (idade >= 13 && idade <= 18)
   {
      printf("Ele eh adolescente!");
   }
   else
   {
      printf("Ele eh adulto!");
   }
}

// questao 20
#include <stdio.h>
#include <stdlib.h>

int main()
{

   int estadoCivil;

   printf("1. Solteiro\n");
   printf("2. casado\n");
   printf("3. divorciado\n");
   printf("4. viuvo\n");
   printf("Digite seu estado civil de 1 a 4: ");
   scanf("%d", &estadoCivil);

   switch (estadoCivil)
   {
   case 1:
      printf("Voce esta solteiro");
      break;
   case 2:
      printf("Voce esta casado");
      break;
   case 3:
      printf("Voce esta divorciado");
      break;
   case 4:
      printf("Voce esta viuvo");
      break;
   case 5:
      printf("Saindo do programa...\n");
      break;
   }
}

// questao 21
#include <stdio.h>
#include <stdlib.h>

int main()
{

   int number1;
   int number2;
   int opcao;

   printf("Digite o pimeiro numero: ");
   scanf("%d", &number1);

   printf("Digite o segundo numero: ");
   scanf("%d", &number2);

   opcao = number1 + number2;

   switch (opcao)
   {
   case 1:
      printf("1 - Soma");
      break;
   case 2:
      printf("2 - Subtracao");
      break;
   case 3:
      printf("3 - Multiplicacao");
      break;
   case 4:
      printf("4 - Divisao");
      break;
   case 5:
      printf("Opcao Invalida!");
      break;

   default:
      break;
   }
}

// questao 22
#include <stdio.h>

int main()
{
   char nome[50];
   int idade;

   printf("Digite o nome: ");
   scanf("%s", nome);

   printf("Digite a idade: ");
   while (scanf("%d", &idade) != 1)
   {
      printf("Idade invalida. Digite um valor inteiro: ");
      scanf("%*s");
   }

   printf("Nome: %s\n", nome);
   printf("Idade: %d\n", idade);

   return 0;
}

// questao 23
#include <stdio.h>

int main()
{
   float metros;
   float centrimetros;
   float milimetros;
   float quilometros;

   printf("Digite uma valor em metros: ");
   scanf("%f", &metros);

   centrimetros = metros * 100;
   milimetros = metros * 1000;
   quilometros = metros / 1000;

   printf("%.f metros equivalem a: \n", metros);
   printf("%.f centrimetros\n", centrimetros);
   printf("%.f milimetros\n", milimetros);
   printf("%.f quilometros\n", quilometros);
}
