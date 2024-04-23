//questao 01
#include <stdio.h>
#include <string.h>

int main() {
    char str[100]; 

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);  

    
    
    str[strcspn(str, "\n")] = 0; 

    printf("Voce digitou: %s\n", str); 

    return 0;
}

//questao 02
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];  
    int comprimento = 0;  

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = 0;

    while (str[comprimento] != '\0') {
        comprimento++;
    }

    printf("O comprimento da string: %d\n", comprimento);

    return 0;
}

//questao 03
#include <stdio.h>
#include <string.h>

int compareStrings(const char *str1, const char *str2) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }
        i++;
    }
    return str1[i] - str2[i];
}

int main() {
    char str1[100], str2[100]; 

    printf("Digite a primeira string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0;  

    printf("Digite a segunda string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0;  

    int result = compareStrings(str1, str2);

    if (result == 0) {
        printf("As strings são iguais.\n");
    } else if (result < 0) {
        printf("A primeira string é menor que a segunda string.\n");
    } else {
        printf("A primeira string é maior que a segunda string.\n");
    }

    return 0;
}

//questao 04
#include <stdio.h>
#include <string.h> 

int main() {
    char nome[100]; 

    printf("Digite um nome: ");
    fgets(nome, sizeof(nome), stdin); 

    nome[strcspn(nome, "\n")] = '\0';

    if (strlen(nome) >= 4) {
        printf("As quatro primeiras letras do nome são: %.4s\n", nome);
    } else {
        printf("O nome completo é: %s\n", nome);
    }

    return 0;
}

//questao 05
#include <stdio.h>
#include <string.h> 
int main() {
    char nome[100]; 

    printf("Digite um nome: ");
    fgets(nome, sizeof(nome), stdin); 
    nome[strcspn(nome, "\n")] = '\0';

    if (strlen(nome) >= 4) {
        printf("As quatro primeiras letras do nome são: %.4s\n", nome);
    } else {
        printf("O nome completo é: %s\n", nome);
    }

    return 0;
}

//questao 06
#include <stdio.h>
#include <string.h>
#include <ctype.h> // Para usar a função tolower()

int main() {
    char nome[100], sexo;
    int idade;

    printf("Digite o nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0'; 

    printf("Digite o sexo (M/F): ");
    scanf("%c", &sexo);
    sexo = tolower(sexo); 

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (sexo == 'f' && idade < 25) {
        printf("%s ACEITA\n", nome);
    } else {
        printf("NÃO ACEITA\n");
    }

    return 0;
}

//questao 07
#include <stdio.h>

int main() {
    char str[100]; 
    int contador = 0; 

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin); 

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '1') { 
            contador++; 
        }
    }

    printf("O número de '1's na string é: %d\n", contador);

    return 0;
}

//questao 08
#include <stdio.h>

int main() {
    char str[100]; 

    printf("Digite uma string contendo '0's e outros caracteres: ");
    fgets(str, sizeof(str), stdin); 

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '0') {
            str[i] = '1';
        }
    }

    printf("String após substituição: %s", str);

    return 0;
}

//questao 09
#include <stdio.h>
#include <ctype.h> 

int main() {
    char nome[100]; 

    printf("Digite um nome: ");
    fgets(nome, sizeof(nome), stdin); 

    if (tolower(nome[0]) == 'a') {
        printf("O nome é: %s", nome);
    } else {
        printf("O nome não começa com 'A' ou 'a'.\n");
    }

    return 0;
}

//questao 10
#include <stdio.h>
#include <string.h> 

int main() {
    char palavra[100];

    printf("Digite uma palavra: ");
    fgets(palavra, sizeof(palavra), stdin); 

    palavra[strcspn(palavra, "\n")] = '\0';

    int tamanho = strlen(palavra); 

    printf("Palavra invertida: ");
    for (int i = tamanho - 1; i >= 0; i--) {
        putchar(palavra[i]);
    }
    printf("\n");

    return 0;
}

//questao 11
#include <stdio.h>
#include <ctype.h>  
#include <string.h>

int main() {
    char str[100]; 

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin); 

    str[strcspn(str, "\n")] = '\0';

    printf("String sem vogais: ");
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);

        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
            putchar(str[i]); 
        }
    }
    printf("\n");

    return 0;
}

//questao 12
#include <stdio.h>
#include <ctype.h> 
#include <string.h>

int main() {
    char palavra[100], substituto; 
    int contadorVogais = 0; 

    printf("Digite uma palavra: ");
    fgets(palavra, sizeof(palavra), stdin);
    palavra[strcspn(palavra, "\n")] = '\0'; 

    for (int i = 0; palavra[i] != '\0'; i++) {
        char ch = tolower(palavra[i]); 
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            contadorVogais++;
        }
    }

    printf("A palavra '%s' tem %d vogais.\n", palavra, contadorVogais);

    printf("Digite um caractere para substituir todas as vogais: ");
    scanf(" %c", &substituto); 

    for (int i = 0; palavra[i] != '\0'; i++) {
        char ch = tolower(palavra[i]); 
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            palavra[i] = substituto;
        }
    }

    printf("Palavra após substituição: %s\n", palavra);

    return 0;
}

//questao 13
#include <stdio.h>
#include <string.h>

int main() {
    char frase[100]; 
    int contador = 0; 

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin); 

    frase[strcspn(frase, "\n")] = '\0';

    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == ' ') { 
            contador++; 
        }
    }

    printf("O número de espaços em branco na frase é: %d\n", contador);

    return 0;
}

//questao 14
#include <stdio.h>
#include <string.h>

int main() {
    char palavra[51]; 

    printf("Digite uma palavra (máximo de 50 letras): ");
    fgets(palavra, sizeof(palavra), stdin); 

    palavra[strcspn(palavra, "\n")] = '\0';

    for (int i = 0; palavra[i] != '\0'; i++) {
        palavra[i] = palavra[i] + 1; 
    }

    printf("String resultante após adicionar 1 ao valor ASCII de cada caractere: %s\n", palavra);

    return 0;
}

//questao 15
#include <stdio.h>
#include <ctype.h> 
#include <string.h>

int main() {
    char cadeia[100]; 

    printf("Digite uma cadeia de caracteres: ");
    fgets(cadeia, sizeof(cadeia), stdin); 

    cadeia[strcspn(cadeia, "\n")] = '\0';

    for (int i = 0; cadeia[i] != '\0'; i++) {
        if (cadeia[i] >= 'a' && cadeia[i] <= 'z') { 
            cadeia[i] = cadeia[i] - 32; 
        }
    }

    printf("Cadeia em maiúsculas: %s\n", cadeia);

    return 0;
}

//questao 16
#include <stdio.h>
#include <string.h>

int main() {
    char cadeia[100]; 
    printf("Digite uma cadeia de caracteres em maiúsculas: ");
    fgets(cadeia, sizeof(cadeia), stdin); 

    cadeia[strcspn(cadeia, "\n")] = '\0';

    for (int i = 0; cadeia[i] != '\0'; i++) {
        if (cadeia[i] >= 'A' && cadeia[i] <= 'Z') { 
            cadeia[i] = cadeia[i] + 32; 
        }
    }

    printf("Cadeia em minúsculas: %s\n", cadeia);

    return 0;
}

//questao 17
#include <stdio.h>
#include <string.h> 

int main() {
    char frase[100];
    char fraseSemEspacos[100]; 
    int i, j = 0; 

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin); 

    frase[strcspn(frase, "\n")] = '\0';

    for (i = 0; frase[i] != '\0'; i++) {
        if (frase[i] != ' ') { 
            fraseSemEspacos[j++] = frase[i]; 
        }
    }
    fraseSemEspacos[j] = '\0'; 

    printf("Frase sem espaços: %s\n", fraseSemEspacos);

    return 0;
}

//questao 18
#include <stdio.h>
#include <string.h>

int main() {
    char frase[100]; 
    char L1, L2;    

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = '\0'; 

    printf("Digite o caractere que deseja substituir: ");
    scanf(" %c", &L1); 

    printf("Digite o novo caractere para substituição: ");
    scanf(" %c", &L2); 

    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == L1) { 
            frase[i] = L2; 
        }
    }

    printf("Frase após substituição: %s\n", frase);

    return 0;
}

//questao 19
#include <stdio.h>
#include <string.h> 

int main() {
    char nome[50]; 
    int idade; 

    char nomeMaisJovem[50], nomeMaisVelho[50]; 
    int idadeMaisJovem = 1000, idadeMaisVelha = -1; 

    while (1) {
        printf("Digite o nome da pessoa: ");
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = '\0'; 
        
        printf("Digite a idade de %s: ", nome);
        scanf("%d", &idade);
        while(getchar() != '\n'); 

        if (idade < 0) {
            break; 
        }

        if (idade < idadeMaisJovem) {
            idadeMaisJovem = idade;
            strcpy(nomeMaisJovem, nome);
        }
        if (idade > idadeMaisVelha) {
            idadeMaisVelha = idade;
            strcpy(nomeMaisVelho, nome);
        }
    }

    if (idadeMaisVelha == -1) {
        printf("Nenhum dado válido foi inserido.\n");
    } else {
        printf("A pessoa mais jovem é %s com %d anos.\n", nomeMaisJovem, idadeMaisJovem);
        printf("A pessoa mais velha é %s com %d anos.\n", nomeMaisVelho, idadeMaisVelha);
    }

    return 0;
}

//questao 20
#include <stdio.h>

int main() {
    char modelos[5][20] = {"Fusca", "Gol", "Vectra", "Corolla", "Civic"}; 
    float consumo[5]; 
    int i, indiceMaisEconomico = 0;
    float maisEconomico = 0; 
    for (i = 0; i < 5; i++) {
        printf("Digite o consumo de %s em km/L: ", modelos[i]);
        scanf("%f", &consumo[i]);
    }

    for (i = 0; i < 5; i++) {
        if (consumo[i] > maisEconomico) {
            maisEconomico = consumo[i];
            indiceMaisEconomico = i;
        }
    }

    printf("\nO carro mais econômico é o %s.\n", modelos[indiceMaisEconomico]);

    printf("\nLitros consumidos para percorrer 1.000 km:\n");
    for (i = 0; i < 5; i++) {
        float litros = 1000.0 / consumo[i];
        printf("%s: %.2f litros\n", modelos[i], litros);
    }

    return 0;
}

//questao 21
#include <stdio.h>
#include <string.h> 
int main() {
    char frase1[100], frase2[100]; 
    int i, tamanho;

    printf("Digite a primeira frase: ");
    fgets(frase1, sizeof(frase1), stdin);
    frase1[strcspn(frase1, "\n")] = '\0'; 

    printf("Digite a segunda frase: ");
    fgets(frase2, sizeof(frase2), stdin);
    frase2[strcspn(frase2, "\n")] = '\0'; 

    tamanho = strlen(frase1);
    printf("Primeira frase invertida e modificada: ");
    for (i = tamanho - 1; i >= 0; i--) {
        char ch = frase1[i];
        if (ch == 'A' || ch == 'a') {
            putchar('*');
        } else {
            putchar(ch);
        }
    }
    printf("\n");

    tamanho = strlen(frase2);
    printf("Segunda frase invertida e modificada: ");
    for (i = tamanho - 1; i >= 0; i--) {
        char ch = frase2[i];
        if (ch == 'A' || ch == 'a') {
            putchar('*');
        } else {
            putchar(ch);
        }
    }
    printf("\n");

    return 0;
}

//questao 22
#include <stdio.h>
#include <string.h>

int main() {
    char nomeMercadoria[100]; 
    float valorTotal, valorDesconto, valorAPagar;

    printf("Digite o nome da mercadoria: ");
    fgets(nomeMercadoria, sizeof(nomeMercadoria), stdin);
    nomeMercadoria[strcspn(nomeMercadoria, "\n")] = '\0'; 

    printf("Digite o valor total da mercadoria (R$): ");
    scanf("%f", &valorTotal);

    valorDesconto = valorTotal * 0.10; 
    valorAPagar = valorTotal - valorDesconto; 

    printf("\nMercadoria: %s\n", nomeMercadoria);
    printf("Valor Total: R$ %.2f\n", valorTotal);
    printf("Valor do Desconto: R$ %.2f\n", valorDesconto);
    printf("Valor a Pagar à Vista: R$ %.2f\n", valorAPagar);

    return 0;
}

//questao 23
#include <stdio.h>
#include <string.h> 

int main() {
    char S[100]; 
    int I, J; 

    printf("Digite uma string: ");
    fgets(S, sizeof(S), stdin);
    S[strcspn(S, "\n")] = '\0';

    printf("Digite o índice inicial (I): ");
    scanf("%d", &I);
    printf("Digite o índice final (J): ");
    scanf("%d", &J);

    int len = strlen(S); 
    if (I < 0 || J < I || J >= len) {
        printf("Índices inválidos! I e J devem estar dentro do intervalo [0, %d] e I <= J.\n", len - 1);
        return 1; 
    }

    printf("Segmento da string de %d a %d: ", I, J);
    for (int k = I; k <= J; k++) {
        putchar(S[k]);
    }
    printf("\n");

    return 0;
}

//questao 24
#include <stdio.h>
#include <string.h> 

int main() {
    char S[100]; 
    char C;      
    int I;       
    int found = -1; 

    printf("Digite uma string: ");
    fgets(S, sizeof(S), stdin);
    S[strcspn(S, "\n")] = '\0'; 

    printf("Digite o caractere a ser buscado: ");
    scanf("%c", &C);

    printf("Digite a posição inicial para começar a busca: ");
    scanf("%d", &I);

    if (I < 0 || I >= strlen(S)) {
        printf("Posição inicial inválida!\n");
        return 1;
    }

    for (int k = I; k < strlen(S); k++) {
        if (S[k] == C) {
            found = k;
            break;
        }
    }

    if (found != -1) {
        printf("O caractere '%c' foi encontrado na posição %d.\n", C, found);
    } else {
        printf("O caractere '%c' não foi encontrado na string após a posição %d.\n", C, I);
    }

    return 0;
}

//questao 25
#include <stdio.h>
#include <string.h> // Necessário para usar strcmp()

int main() {
    char palavra1[100], palavra2[100]; 
    printf("Digite a primeira palavra: ");
    fgets(palavra1, sizeof(palavra1), stdin);
    palavra1[strcspn(palavra1, "\n")] = '\0'; 

    printf("Digite a segunda palavra: ");
    fgets(palavra2, sizeof(palavra2), stdin);
    palavra2[strcspn(palavra2, "\n")] = '\0'; 

    int resultado = strcmp(palavra1, palavra2);

    if (resultado < 0) {
        printf("'%s' vem antes de '%s' na ordem alfabética.\n", palavra1, palavra2);
    } else if (resultado > 0) {
        printf("'%s' vem antes de '%s' na ordem alfabética.\n", palavra2, palavra1);
    } else {
        printf("As palavras são iguais.\n");
    }

    return 0;
}

//questao 26
#include <stdio.h>
#include <string.h>

#define DESLOCAMENTO 3 

void cifraCesar(char *string) {
    int i = 0;

    while (string[i] != '\0') {
        if (string[i] >= 'a' && string[i] <= 'z') {
            string[i] = 'a' + (string[i] - 'a' + DESLOCAMENTO) % 26; 
        }
        else if (string[i] >= 'A' && string[i] <= 'Z') {
            string[i] = 'A' + (string[i] - 'A' + DESLOCAMENTO) % 26; 
        }
        i++;
    }
}

int main() {
    char string[100];

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    string[strcspn(string, "\n")] = '\0';

    cifraCesar(string);

    printf("String codificada: %s\n", string);

    return 0;
}

//questao 27
#include <stdio.h>
#include <string.h>

int main() {
    char string1[100], string2[100];

    printf("Digite a primeira string: ");
    fgets(string1, sizeof(string1), stdin);

    string1[strcspn(string1, "\n")] = '\0';

    printf("Digite a segunda string: ");
    fgets(string2, sizeof(string2), stdin);

    string2[strcspn(string2, "\n")] = '\0';

    int tamanho1 = strlen(string1);
    int tamanho2 = strlen(string2);

    int contida = 1; 
    if (tamanho1 >= tamanho2) {
        for (int i = 0; i < tamanho2; i++) {
            if (string1[tamanho1 - tamanho2 + i] != string2[i]) {
                contida = 0; 
                break;
            }
        }
    } else {
        contida = 0; 
    }

    if (contida) {
        printf("A segunda string está contida no final da primeira.\n");
    } else {
        printf("A segunda string não está contida no final da primeira.\n");
    }

    return 0;
}

//questao 28
#include <stdio.h>
#include <string.h>

#define MAX_LEN 20

void lerString(char *s);
void imprimirTamanho(char *s);
void compararStrings(char *s1);
void concatenarStrings(char *s1);
void imprimirReverso(char *s);
void contarCaractere(char *s);
void substituirCaractere(char *s);
void verificarSubstring(char *s1);
void retornarSubstring(char *s1);

int main() {
    char s1[MAX_LEN + 1] = ""; // Inicializa com string vazia
    char opcao;

    do {
        printf("\nMenu:\n");
        printf("a. Ler uma string S1 (tamanho máximo 20 caracteres)\n");
        printf("b. Imprimir o tamanho da string S1\n");
        printf("c. Comparar a string S1 com uma nova string S2 e imprimir o resultado da comparação\n");
        printf("d. Concatenar a string S1 com uma nova string S2 e imprimir o resultado da concatenação\n");
        printf("e. Imprimir a string S1 de forma reversa\n");
        printf("f. Contar quantas vezes um dado caractere aparece na string S1\n");
        printf("g. Substituir a primeira ocorrência do caractere C1 na string S1 pelo caractere C2\n");
        printf("h. Verificar se uma string S2 é substring de S1\n");
        printf("i. Retornar uma substring da string S1\n");
        printf("q. Sair\n");

        printf("\nEscolha uma opção: ");
        scanf(" %c", &opcao);

        switch (opcao) {
            case 'a':
                lerString(s1);
                break;
            case 'b':
                imprimirTamanho(s1);
                break;
            case 'c':
                compararStrings(s1);
                break;
            case 'd':
                concatenarStrings(s1);
                break;
            case 'e':
                imprimirReverso(s1);
                break;
            case 'f':
                contarCaractere(s1);
                break;
            case 'g':
                substituirCaractere(s1);
                break;
            case 'h':
                verificarSubstring(s1);
                break;
            case 'i':
                retornarSubstring(s1);
                break;
            case 'q':
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 'q');

    return 0;
}

void lerString(char *s) {
    printf("Digite a string S1 (máximo 20 caracteres): ");
    scanf(" %20s", s);
}

void imprimirTamanho(char *s) {
    printf("O tamanho da string S1 é: %lu\n", strlen(s));
}

void compararStrings(char *s1) {
    char s2[MAX_LEN + 1];
    printf("Digite a string S2 para comparação: ");
    scanf(" %20s", s2);

    if (strcmp(s1, s2) == 0) {
        printf("As strings são iguais.\n");
    } else {
        printf("As strings são diferentes.\n");
    }
}

void concatenarStrings(char *s1) {
    char s2[MAX_LEN + 1];
    printf("Digite a string S2 para concatenação: ");
    scanf(" %20s", s2);

    if (strlen(s1) + strlen(s2) <= MAX_LEN) {
        strcat(s1, s2);
        printf("Resultado da concatenação: %s\n", s1);
    } else {
        printf("Concatenação resultaria em string muito longa.\n");
    }
}

void imprimirReverso(char *s) {
    printf("String S1 reversa: ");
    for (int i = strlen(s) - 1; i >= 0; i--) {
        putchar(s[i]);
    }
    putchar('\n');
}

void contarCaractere(char *s) {
    char c;
    printf("Informe o caractere para contar em S1: ");
    scanf(" %c", &c);

    int count = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == c) count++;
    }

    printf("O caractere '%c' aparece %d vezes em S1.\n", c, count);
}

void substituirCaractere(char *s) {
    char c1, c2;
    printf("Informe o caractere C1 para substituir: ");
    scanf(" %c", &c1);
    printf("Informe o caractere C2 substituto: ");
    scanf(" %c", &c2);

    char *pos = strchr(s, c1);
    if (pos != NULL) {
        *pos = c2;
        printf("Nova string S1: %s\n", s);
    } else {
        printf("Caractere C1 não encontrado em S1.\n");
    }
}

void verificarSubstring(char *s1) {
    char s2[MAX_LEN + 1];
    printf("Digite a string S2 para verificar se é substring: ");
    scanf(" %20s", s2);

    if (strstr(s1, s2) != NULL) {
        printf("S2 é substring de S1.\n");
    } else {
        printf("S2 não é substring de S1.\n");
    }
}

void retornarSubstring(char *s1) {
    int inicio, tamanho;
    printf("Informe a posição inicial para a substring: ");
    scanf("%d", &inicio);
    printf("Informe o tamanho da substring: ");
    scanf("%d", &tamanho);

    if (inicio < 0 || inicio >= strlen(s1) || tamanho < 0 || inicio + tamanho > strlen(s1)) {
        printf("Parâmetros inválidos para substring.\n");
    } else {
        char substring[MAX_LEN + 1] = {0};
        strncpy(substring, s1 + inicio, tamanho);
        printf("Substring: %s\n", substring);
    }
}

//questao 29
#include <stdio.h>
#include <stdlib.h>

int main() {
    char data[11];
    int dia, mes, ano;

    printf("Digite a data no formato DD/MM/AAAA: ");
    scanf("%s", data);

    if (data[2] != '/' || data[5] != '/') {
        printf("Formato da data inválido. As barras devem estar nos lugares corretos.\n");
        return 1; 
    }

    dia = atoi(data);
    mes = atoi(data + 3);
    ano = atoi(data + 6);

    if (dia == 0 || mes == 0 || ano == 0) {
        printf("Formato da data inválido. DD, MM e AAAA devem ser numéricos.\n");
        return 1; 
    }

    printf("Dia: %d\n", dia);
    printf("Mês: %d\n", mes);
    printf("Ano: %d\n", ano);

    return 0;
}

//questao 30
#include <stdio.h>
#include <string.h>

#define MAX_ALUNOS 5
#define TAM_NOME 50

int main() {
    char nomes[MAX_ALUNOS][TAM_NOME]; 
    char nomeBusca[TAM_NOME]; 
    int numAlunos = 0; 

    while (numAlunos < MAX_ALUNOS) {
        printf("Insira o nome do aluno %d: ", numAlunos + 1);
        scanf("%s", nomes[numAlunos]);
        numAlunos++;

        char opcao;
        printf("Deseja inserir mais um nome? (S/N): ");
        scanf(" %c", &opcao);
        if (opcao == 'N' || opcao == 'n') {
            break;
        }
    }

    printf("\nDigite o nome que deseja buscar: ");
    scanf("%s", nomeBusca);

    int encontrado = 0;
    for (int i = 0; i < numAlunos; i++) {
        if (strstr(nomes[i], nomeBusca) != NULL) {
            printf("O nome '%s' foi encontrado na posição %d da lista.\n", nomes[i], i + 1);
            encontrado = 1;
        }
    }

    if (!encontrado) {
        printf("O nome '%s' não foi encontrado na lista.\n", nomeBusca);
    }

    return 0;
}

