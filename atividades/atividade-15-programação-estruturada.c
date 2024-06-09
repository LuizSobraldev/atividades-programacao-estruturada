// questao 01
#include <stdio.h>

int main() {
    FILE *arquivo;
    char caractere;

    arquivo = fopen("arq.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    printf("Digite caracteres para gravar no arquivo (digite '0' para finalizar):\n");
    while (1) {
        scanf(" %c", &caractere); 
        if (caractere == '0') {
            break;
        }
        fputc(caractere, arquivo);
    }

    fclose(arquivo);

    arquivo = fopen("arq.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    printf("Conteúdo do arquivo:\n");
    while ((caractere = fgetc(arquivo)) != EOF) {
        putchar(caractere);
    }

    fclose(arquivo);

    return 0;
}

// questao 02
#include <stdio.h>

int main() {
    FILE *arquivo;
    char nomeArquivo[100];
    char caractere;
    int numLinhas = 0;

    printf("Digite o nome do arquivo (com a extensão): ");
    scanf("%s", nomeArquivo);

    arquivo = fopen(nomeArquivo, "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while ((caractere = fgetc(arquivo)) != EOF) {
        if (caractere == '\n') {
            numLinhas++;
        }
    }

    if (caractere != '\n' && numLinhas == 0) {
        numLinhas = 1;
    }

    fclose(arquivo);

    printf("O arquivo %s possui %d linhas.\n", nomeArquivo, numLinhas);

    return 0;
}

// questao 03
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *arquivo;
    char nomeArquivo[100];
    char caractere;
    int numVogais = 0;

    printf("Digite o nome do arquivo (com a extensão): ");
    scanf("%s", nomeArquivo);

    arquivo = fopen(nomeArquivo, "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while ((caractere = fgetc(arquivo)) != EOF) {
        caractere = tolower(caractere); 
        if (caractere == 'a' || caractere == 'e' || caractere == 'i' || 
            caractere == 'o' || caractere == 'u') {
            numVogais++;
        }
    }

    fclose(arquivo);

    printf("O arquivo %s possui %d vogais.\n", nomeArquivo, numVogais);

    return 0;
}

// questao 04
#include <stdio.h>

int main() {
    FILE *arquivo;
    char nomeArquivo[100];
    char caractere, caractereBuscado;
    int contagem = 0;

    printf("Digite o nome do arquivo (com a extensão): ");
    scanf("%s", nomeArquivo);

    printf("Digite o caractere a ser buscado: ");
    scanf(" %c", &caractereBuscado); 

    arquivo = fopen(nomeArquivo, "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while ((caractere = fgetc(arquivo)) != EOF) {
        if (caractere == caractereBuscado) {
            contagem++;
        }
    }

    fclose(arquivo);

    printf("O caractere '%c' ocorre %d vezes no arquivo %s.\n", caractereBuscado, contagem, nomeArquivo);

    return 0;
}

// questao 05
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *arquivoOrigem;
    FILE *arquivoDestino;
    char nomeArquivoOrigem[100];
    char nomeArquivoDestino[100];
    char caractere;

    printf("Digite o nome do arquivo de origem (com a extensão): ");
    scanf("%s", nomeArquivoOrigem);

    printf("Digite o nome do arquivo de destino (com a extensão): ");
    scanf("%s", nomeArquivoDestino);

    arquivoOrigem = fopen(nomeArquivoOrigem, "r");

    if (arquivoOrigem == NULL) {
        printf("Erro ao abrir o arquivo de origem.\n");
        return 1;
    }

    arquivoDestino = fopen(nomeArquivoDestino, "w");

    if (arquivoDestino == NULL) {
        printf("Erro ao abrir o arquivo de destino.\n");
        fclose(arquivoOrigem);
        return 1;
    }

    while ((caractere = fgetc(arquivoOrigem)) != EOF) {
        fputc(toupper(caractere), arquivoDestino);
    }

    fclose(arquivoOrigem);
    fclose(arquivoDestino);

    printf("Arquivo convertido com sucesso.\n");

    return 0;
}

// questao 06
#include <stdio.h>
#include <string.h>

#define MAX_WORD_LENGTH 100

int main() {
    FILE *arquivo;
    char nomeArquivo[100];
    char palavra[MAX_WORD_LENGTH];
    char palavraLida[MAX_WORD_LENGTH];
    int contagem = 0;

    printf("Digite o nome do arquivo (com a extensão): ");
    scanf("%s", nomeArquivo);

    printf("Digite a palavra a ser buscada: ");
    scanf("%s", palavra);

    arquivo = fopen(nomeArquivo, "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while (fscanf(arquivo, "%s", palavraLida) != EOF) {
        if (strcmp(palavraLida, palavra) == 0) {
            contagem++;
        }
    }

    fclose(arquivo);

    printf("A palavra '%s' ocorre %d vezes no arquivo %s.\n", palavra, contagem, nomeArquivo);

    return 0;
}

// questao 07
#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 100
#define MAX_PHONE_LENGTH 15

int main() {
    FILE *arquivo;
    char nomeArquivo[100];
    char nome[MAX_NAME_LENGTH];
    char telefone[MAX_PHONE_LENGTH];

    printf("Digite o nome do arquivo para salvar os cadastros (com a extensão): ");
    scanf("%s", nomeArquivo);

    arquivo = fopen(nomeArquivo, "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while (1) {
        printf("Digite o nome: ");
        scanf("%s", nome);
        printf("Digite o telefone (ou 0 para finalizar): ");
        scanf("%s", telefone);

        if (strcmp(telefone, "0") == 0) {
            break;
        }

        fprintf(arquivo, "Nome: %s, Telefone: %s\n", nome, telefone);
    }

    fclose(arquivo);

    printf("Cadastros salvos com sucesso no arquivo %s.\n", nomeArquivo);

    return 0;
}

// questao 08
#include <stdio.h>

#define MAX_NAME_LENGTH 100

int main() {
    FILE *arquivo;
    char nomeArquivo[100];
    char nomeProduto[MAX_NAME_LENGTH];
    float precoProduto;
    float totalCompra = 0;

    printf("Digite o nome do arquivo contendo os produtos (com a extensão): ");
    scanf("%s", nomeArquivo);

    arquivo = fopen(nomeArquivo, "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while (fscanf(arquivo, "%s %f", nomeProduto, &precoProduto) != EOF) {
        totalCompra += precoProduto;
    }

    fclose(arquivo);

    printf("O total da compra é: R$ %.2f\n", totalCompra);

    return 0;
}

// questao 09
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CONTACTS 100
#define MAX_NAME_LENGTH 50

typedef struct {
    char nome[MAX_NAME_LENGTH];
    char telefone[15];
    int dia_aniversario;
    int mes_aniversario;
} Contato;

void inserirContato(Contato agenda[], int *numContatos) {
    if (*numContatos < MAX_CONTACTS) {
        printf("Digite o nome do contato: ");
        scanf("%s", agenda[*numContatos].nome);
        printf("Digite o telefone do contato: ");
        scanf("%s", agenda[*numContatos].telefone);
        printf("Digite o dia do aniversario (DD): ");
        scanf("%d", &agenda[*numContatos].dia_aniversario);
        printf("Digite o mes do aniversario (MM): ");
        scanf("%d", &agenda[*numContatos].mes_aniversario);
        (*numContatos)++;
        printf("Contato inserido com sucesso!\n");
    } else {
        printf("Agenda cheia. Impossivel adicionar mais contatos.\n");
    }
}

void removerContato(Contato agenda[], int *numContatos) {
    char nomeRemover[MAX_NAME_LENGTH];
    int i, j;

    if (*numContatos == 0) {
        printf("Agenda vazia. Nenhum contato para remover.\n");
        return;
    }

    printf("Digite o nome do contato que deseja remover: ");
    scanf("%s", nomeRemover);

    for (i = 0; i < *numContatos; i++) {
        if (strcmp(agenda[i].nome, nomeRemover) == 0) {
            for (j = i; j < *numContatos - 1; j++) {
                agenda[j] = agenda[j + 1];
            }
            (*numContatos)--;
            printf("Contato removido com sucesso!\n");
            return;
        }
    }

    printf("Contato nao encontrado na agenda.\n");
}

void pesquisarContato(Contato agenda[], int numContatos) {
    char nomePesquisar[MAX_NAME_LENGTH];
    int i;

    if (numContatos == 0) {
        printf("Agenda vazia. Nenhum contato para pesquisar.\n");
        return;
    }

    printf("Digite o nome do contato que deseja pesquisar: ");
    scanf("%s", nomePesquisar);

    for (i = 0; i < numContatos; i++) {
        if (strcmp(agenda[i].nome, nomePesquisar) == 0) {
            printf("Nome: %s\nTelefone: %s\nAniversario: %d/%d\n", agenda[i].nome, agenda[i].telefone, agenda[i].dia_aniversario, agenda[i].mes_aniversario);
            return;
        }
    }

    printf("Contato nao encontrado na agenda.\n");
}

void listarContatos(Contato agenda[], int numContatos) {
    int i;

    if (numContatos == 0) {
        printf("Agenda vazia. Nenhum contato para listar.\n");
        return;
    }

    printf("Lista de contatos:\n");
    for (i = 0; i < numContatos; i++) {
        printf("Nome: %s\nTelefone: %s\nAniversario: %d/%d\n\n", agenda[i].nome, agenda[i].telefone, agenda[i].dia_aniversario, agenda[i].mes_aniversario);
    }
}

void listarContatosPorLetra(Contato agenda[], int numContatos) {
    char letra;
    int i;
    int encontrou = 0;

    if (numContatos == 0) {
        printf("Agenda vazia. Nenhum contato para listar.\n");
        return;
    }

    printf("Digite a letra inicial para listar os contatos: ");
    scanf(" %c", &letra);

    printf("Contatos com nome iniciado pela letra '%c':\n", letra);
    for (i = 0; i < numContatos; i++) {
        if (agenda[i].nome[0] == letra) {
            printf("Nome: %s\nTelefone: %s\nAniversario: %d/%d\n\n", agenda[i].nome, agenda[i].telefone, agenda[i].dia_aniversario, agenda[i].mes_aniversario);
            encontrou = 1;
        }
    }

    if (!encontrou) {
        printf("Nenhum contato encontrado com nome iniciado pela letra '%c'.\n", letra);
    }
}

int main() {
    Contato agenda[MAX_CONTACTS];
    int numContatos = 0;
    int opcao;

    do {
        printf("\nMenu:\n");
        printf("1. Inserir contato\n");
        printf("2. Remover contato\n");
        printf("3. Pesquisar contato pelo nome\n");
        printf("4. Listar todos os contatos\n");
        printf("5. Listar contatos por letra inicial\n");
        printf("6. Sair\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                inserirContato(agenda, &numContatos);
                break;
            case 2:
                removerContato(agenda, &numContatos);
                break;
            case 3:
                pesquisarContato(agenda, numContatos);
                break;
            case 4:
                listarContatos(agenda, numContatos);
                break;
            case 5:
                listarContatosPorLetra(agenda, numContatos);
                break;
            case 6:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 6);

    return 0;
}
