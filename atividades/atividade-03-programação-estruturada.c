// questao 1
#include <stdio.h>
#include <stdlib.h>

int main(){
    int x = 10;
    
    printf("%d\n", x);

    float y = 5.0;

    printf("%d%f\n", x, y);

    printf("%d %f\n", x, y);

    system('pause');

    return 0;
}

// questao 2
#include <stdio.h>
#include <stdlib.h>

int main(){
    int x,z;
    float y;

    scanf("%d", &x);

    scanf("%f", &y);

    scanf("%d%f", &x, &y);

    scanf("%d%d", &x, &z);

    scanf("%d %d", &x, &z);

    system('pause');
    return 0;
}


// questao 3
#include <stdio.h>
#include <stdlib.h>

int main(){
    char name[10];
    
    printf("Digite seu nome: \n");
    scanf("%s", &name);
    printf("boas vindas %s", name);

    return 0;
}

//questao 4
#include <stdio.h>
#include <string.h>

int converterNumero(const char *texto) {
    if (strcmp(texto, "zero") == 0) {
        return 0;
    } else if (strcmp(texto, "um") == 0) {
        return 1;
    } else if (strcmp(texto, "dois") == 0) {
        return 2;
    } else if (strcmp(texto, "três") == 0) {
        return 3;
    } else if (strcmp(texto, "quatro") == 0) {
        return 4;
    } else if (strcmp(texto, "cinco") == 0) {
        return 5;
    } else if (strcmp(texto, "seis") == 0) {
        return 6;
    } else if (strcmp(texto, "sete") == 0) {
        return 7;
    } else if (strcmp(texto, "oito") == 0) {
        return 8;
    } else if (strcmp(texto, "nove") == 0) {
        return 9;
    } else {
        return -1; 
    }
}

int main() {
    char texto[20];

    printf("Digite um número por extenso (zero a nove): ");
    scanf("%s", texto);

    int numero = converterNumero(texto);

    if (numero != -1) {
        printf("O número digitado em forma de texto é: %d\n", numero);
    } else {
        printf("Número por extenso não reconhecido.\n");
    }

    return 0;
}

//questao 5
#include <stdio.h>
#include <stdlib.h>

int main(){

    int num_inteiro;
    float num_decimal;

    printf("Digite um numero inteiro: \n");
    scanf("%d", &num_inteiro);

    num_decimal = (float)num_inteiro;

    // Imprime o número decimal
    printf("O número decimal correspondente é: %.2f\n", num_decimal);

    return 0;

}

//questao 6
#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1;
    int num2;
    int soma;

    printf("Digite o primeiro numero inteiro: \n");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro: \n");
    scanf("%d", &num2);

    soma = num1 + num2;

    printf("O resultado da soma dos 2 numeros inteiros eh: %d\n", soma);


}

//questao 7
#include <stdio.h>
#include <stdlib.h>

int main(){

    float num_decimal;
    int quadrado;

    printf("Digite um numero decimal: ");
    scanf("%f", &num_decimal);

    quadrado = num_decimal * num_decimal;

    printf("o valor do seu quadrado eh: %d\n", quadrado);


}

//questao 8
#include <stdio.h>
#include <stdlib.h>

int main(){

    int ano_nascimento;
    int idade;
    int ano = 2024;

    printf("Qual o ano que voce nasceu: ");
    scanf("%d", &ano_nascimento);

    idade = ano - ano_nascimento ;

    printf("A sua idade eh: %d\n", idade);


}

//questao 9
#include <stdio.h>
#include <stdlib.h>

int main(){

    char name[10];
    char sobrenome[15];

    printf("Digite aqui seu primeiro nome: ");
    scanf("%s", &name);

    printf("Digite aqui seu sobrenome: ");
    scanf("%s", &sobrenome);

    printf("Seu nome completo eh: %s %s\n", name, sobrenome);

}

// questao 10
#include <stdio.h>
#include <stdlib.h>

int main(){

    int number;
    int contador = 0;

    printf("Digite uma sequência de números separados por espaço: ");

    while (scanf("%d", &number) == 1){
        contador++;
    }

    printf("Foram digitados %d números.\n", contador);
    

    return 0;
}

// questao 11
#include <stdio.h>
#include <stdlib.h>

int main(){

    char animal[20];

    printf("Digite aqui o nome do animal que voce esta pensando: ");
    scanf("%s", animal);

    printf("O nome do animal eh: %s\n", animal);

    return 0;

}

// questao 12
#include <stdio.h>
#include <stdlib.h>

int main(){

    char name[10];
    char sobrenome[15];


    printf("Digite seu nome:");
    scanf("%s", name);

    printf("Digite seu sobrenome:");
    scanf("%s", sobrenome);
     
    printf("Seu nome invertido fica: %s %s", sobrenome, name);
}
// questao 13
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char string[100];

    printf("Digite uma string ");
    fgets(string, sizeof(string), stdin);

     if (string[strlen(string) - 1] == '\n') {
        string[strlen(string) - 1] = '\0';
    }

    int tamanho = strlen(string);

    printf("O tamanho da string é: %d\n", tamanho);
}

// questao 14
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int num_inteiro;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num_inteiro);

    if (num_inteiro % 2 == 0)
    {
        printf("%d eh um numero par.\n", num_inteiro);
    } else{
        printf("%d eh um numero impar.\n", num_inteiro);
    }

}

// questao 15
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int num_inteiro;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num_inteiro);

    if (num_inteiro >= 0)
    {
        printf("%d eh um numero positivo.\n", num_inteiro);
    } else
    {
        printf("%d eh um numero negativo.\n", num_inteiro);
    }

}

//questao 16
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int num1;
    int num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    if(num1 > num2){
        printf("O maior foi: %d", num1);
    }else if (num2 > num1)
    {
        printf("O maior foi: %d", num2);
    }else{
        printf("Eles sao iguais, insira um numero maior que o outro. \n");
    }
    
}

//questao 17
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

   float peso;
   float altura;
   float IMC;

   printf("Qual a sua altura: ");
   scanf("%f", &altura);

   printf("Qual seu peso: ");
   scanf("%f", &peso);

   IMC = peso / (altura * altura);

   printf("Seu IMC foi de: %.2f", IMC); 

}

//questao 18
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char nome[20];

    printf("Digite seu nome: ");
    scanf("%s", nome);

    if (strlen(nome) > 5)
    {
        printf("O nome tem mais que 5 caracteres \n");
    }else{
        printf("O nome tem menos que 5 caracteres \n");
    }
    

}   

//questao 19
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

   char estadocivil[20];

    printf("Qual o seu estado civil? ");
    scanf("%s", estadocivil);

    if (strcmp(estadocivil, "casado") == 0 || strcmp(estadocivil, "Casado") == 0)
    {
        printf("Voce eh casado, to de olho! \n");
    }else{
        printf("Voce ta solteiro, cuida pai!");
    }
    
}   

//questao 20
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

   float alturaTriangulo;
   float base;
   int area;

    printf("Qual a altura do triangulo? ");
    scanf("%f", &alturaTriangulo);

    printf("Qual a base do triangulo? ");
    scanf("%f", &base);

    area = (base * alturaTriangulo) / 2;

    printf("A area do triangulo eh: %d", area);
    
}   

//questao 21
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

   char cidade[20];

   printf("Digite o nome da sua cidade: ");
   scanf("%s", cidade);

   if (cidade[0] == 'S' || cidade[0] == 's')
   {
    printf("Sua cidade comeca com a letra S");
   }else{
    printf("Sua cidade nao comeca com a letra S");
   }
   
}   

//questao 22
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

   float num1;
   float num2;
   float resto;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    resto = fmod(num1, num2);

    printf("O resto da divisao entre %.2f por %2.f eh %.2f.\n", num1, num2, resto);
}  

//questao 23
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    float num_decimal;
    int num_inteiro;

    printf("Digite um numero decimal ");
    scanf("%f", &num_decimal);

    num_inteiro = (int)num_decimal;

    printf("O numero inteiro eh: %d", num_inteiro);

}   

//questao 24
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int converterPorExtenso(char *numeroPorExtenso) {
    if (strcmp(numeroPorExtenso, "zero") == 0) return 0;
    if (strcmp(numeroPorExtenso, "um") == 0) return 1;
    if (strcmp(numeroPorExtenso, "dois") == 0) return 2;
    if (strcmp(numeroPorExtenso, "tres") == 0) return 3;

    return -1; 
}

int main() {
    char numeroPorExtenso[20];
    int numero, resultado;

    printf("Digite um numero por extenso: ");
    scanf("%s", numeroPorExtenso);

    numero = converterPorExtenso(numeroPorExtenso);

    if (numero != -1) {
        resultado = numero + 10;
        printf("O numero original mais 10 eh: %d\n", resultado);
    } else {
        printf("Numero por extenso nao reconhecido.\n");
    }

}

//questao 25
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char data[11];
    int ano;
    int mes;
    int dia;

    printf("Digite a data no formato dd/mm/aaaa: ");
    scanf("%s", data);

    sscanf(data, "%d/%d/%d", &dia, &mes, &ano);

    printf("Dia: %d\n", dia);
    printf("Mes: %d\n", mes);
    printf("Ano: %d\n", ano);

}

//questao 26
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
    char cidade[20];
    char estado[20];

    printf("Digite o nome da sua cidade:");
    scanf("%s", cidade);

    printf("Digite o nome do seu estado:");
    scanf("%s", estado);

    printf("Voce mora na cidade %s, e no estado de %s\n", cidade, estado);
}

//questao 27
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
    int ano_nascimento;

    printf("Qual o ano que voce nasceu? ");
    scanf("%d", &ano_nascimento);

    printf("Bem vindo ao nosso programa, nascido em %d\n", ano_nascimento);

}

//questao 28
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
   int number1;
   char string[50];

   printf("Digite um numero inteiro: ");
   scanf("%d", &number1);

   printf("Digite uma string: ");
   scanf("%s", string);

   printf("eu te tenho %d e faco faculdade na %s\n", number1, string);
}

//questao 29
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
   char produto[50];
   float preco;

   printf("Qual o nome do produto? ");
   scanf("%s", produto);

   printf("Qual o preco do produto? ");
   scanf("%f", &preco);

   printf("O nome do produto eh %s, e custa R$%.2f reais\n", produto, preco);
}

//questao 30
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
   int numero_inteiro;
   int dobro;

   printf("Digite um numero inteiro: ");
   scanf("%d", &numero_inteiro);

   dobro = numero_inteiro * numero_inteiro;

   printf("O numero inteiro eh %d, e o dobro desse numero eh %d\n", numero_inteiro, dobro);

}

//questao 31
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
   char email[40];

   printf("Digite seu email aqui: ");
   scanf("%s", email);

   printf("%s foi enviado para o banco de dados, obrigado", email);

}

//questao 32
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
   int num1;
   int num2;
   int soma;
   int diferenca;
   int produto;
   int quociente;

   printf("Digite o primeiro numero: ");
   scanf("%d", &num1);

   printf("Digite o segundo numero: ");
   scanf("%d", &num2);

   soma = num1 + num2;
   diferenca = num1 - num2;
   produto = num1 * num2;
   quociente = num1 / num2;

   printf("Soma: %d\n", soma);
   printf("Diferenca: %d\n", diferenca);
   printf("Produto: %d\n", produto);
   printf("Quociente: %d\n", quociente);

}

//questao 33
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
   int base;
   float altura;
   float area;

   printf("Digite a base do tringulo: ");
   scanf("%d", &base);

   printf("Digite a altura do tringulo: ");
   scanf("%f", &altura);

   area = (base * altura) / 2;

   printf("A area do triangulo eh: %.2f", area);

}

//questao 34
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
  float raio;
  float perimetro;

  printf("Digite o raio da circunferencia: ");
  scanf("%f", &raio);

  perimetro = 2 * 3,14 * raio;

  printf("O perimetro eh: %.2f", perimetro); 

}

//questao 35
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
  float altura;
  float base;
  float perimetro;

  printf("Digite a altura do retangulo: ");
  scanf("%f", &altura);

  printf("Digite a base do retangulo: ");
  scanf("%f", &base);

  perimetro = 2 * (base + altura);

  printf("O perimetro do retangulo eh: %2.f", perimetro);

}

//questao 36
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
  float num1;
  float num2;
  float num3;
  float media_aritmetica;

  printf("Digite o primeiro numero: ");
  scanf("%f", &num1);

  printf("Digite o segundo numero: ");
  scanf("%f", &num2);

  printf("Digite o terceiro numero: ");
  scanf("%f", &num3);

  media_aritmetica = (num1 + num2 + num3) / 3;

  printf("A media aritmetica eh: %.2f", media_aritmetica);

}

//questao 37
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
  int idade;
  int meses;
  int dias;

  printf("Quantos anos vc tem? ");
  scanf("%d", &idade);

  dias = idade * 365;
  meses = idade * 12;

  printf("Voce ja viveu %d meses e %d dias.\n", meses, dias);

}

//questao 38
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
  int reais;
  float cotacao_dolar;
  float valor_dolar;

  printf("Digite um valor: ");
  scanf("%d", &reais);


  printf("Digite a cotacao do dolar hoje: ");
  scanf("%f", &cotacao_dolar);

  valor_dolar = reais / cotacao_dolar;

  printf("O valor fornecido por voce na cotacao do dolar atual foi de: US$%.2f dolares.\n", valor_dolar);
}

//questao 39
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
   
    float numero;
    int arredondar;

    printf("Digite um número decimal: ");
    scanf("%f", &numero);

    
    arredondar = round(numero);

    printf("O numero arredondado para o inteiro mais próximo é: %d\n", arredondar);

    return 0;

}

//questao 40
#include <stdio.h>
#include <stdlib.h>

int main() {
   
   int num1;
   int num2;
   int num3;
   int calculo;

   printf("Digite o primeiro numero: ");
   scanf("%d", &num1);


   printf("Digite o segundo numero: ");
   scanf("%d", &num2);

   printf("Digite o terceiro numero: ");
   scanf("%d", &num3);

   calculo = (num1 + num2) * num3;

   printf("O valor do calculo dos 3 numeros digitados eh igual a: %d", calculo);
}

//questao 41
#include <stdio.h>
#include <stdlib.h>

int main() {
   
   int temperaturaCelsius;
   int conversao;

   printf("Digite a temperatura atual em Grau Celsius: ");
   scanf("%d", &temperaturaCelsius);

   conversao = (temperaturaCelsius * 1.8) + 32;

   printf("A temperatura em Fahrenheit eh: %d", conversao);

}
