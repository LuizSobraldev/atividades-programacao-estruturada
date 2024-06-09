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
#define FILENAME "contacts.bin"

struct Contact {
    char name[50];
    char phone[20];
    int birthday; 
};

struct Contact contacts[MAX_CONTACTS];
int numContacts = 0;

void insertContact() {
    if (numContacts < MAX_CONTACTS) {
        printf("Nome: ");
        scanf("%s", contacts[numContacts].name);
        printf("Telefone: ");
        scanf("%s", contacts[numContacts].phone);
        printf("Aniversário (ddmm): ");
        scanf("%d", &contacts[numContacts].birthday);
        numContacts++;
        printf("Contato inserido com sucesso.\n");
    } else {
        printf("A agenda está cheia.\n");
    }
}

void removeContact() {
    char nameToRemove[50];
    printf("Nome do contato a ser removido: ");
    scanf("%s", nameToRemove);
    int i;
    for (i = 0; i < numContacts; i++) {
        if (strcmp(contacts[i].name, nameToRemove) == 0) {
            int j;
            for (j = i; j < numContacts - 1; j++) {
                contacts[j] = contacts[j + 1];
            }
            numContacts--;
            printf("Contato removido com sucesso.\n");
            return;
        }
    }
    printf("Contato não encontrado.\n");
}

void searchContactByName() {
    char nameToSearch[50];
    printf("Nome do contato a ser pesquisado: ");
    scanf("%s", nameToSearch);
    int i;
    for (i = 0; i < numContacts; i++) {
        if (strcmp(contacts[i].name, nameToSearch) == 0) {
            printf("Nome: %s\n", contacts[i].name);
            printf("Telefone: %s\n", contacts[i].phone);
            printf("Aniversário: %d\n", contacts[i].birthday);
            return;
        }
    }
    printf("Contato não encontrado.\n");
}

void listAllContacts() {
    printf("Lista de contatos:\n");
    int i;
    for (i = 0; i < numContacts; i++) {
        printf("Nome: %s\n", contacts[i].name);
        printf("Telefone: %s\n", contacts[i].phone);
        printf("Aniversário: %d\n", contacts[i].birthday);
        printf("\n");
    }
}

void listContactsByInitialLetter() {
    char letter;
    printf("Digite a letra inicial dos contatos a serem listados: ");
    scanf(" %c", &letter);
    printf("Contatos com a letra '%c':\n", letter);
    int i;
    for (i = 0; i < numContacts; i++) {
        if (contacts[i].name[0] == letter) {
            printf("Nome: %s\n", contacts[i].name);
            printf("Telefone: %s\n", contacts[i].phone);
            printf("Aniversário: %d\n", contacts[i].birthday);
            printf("\n");
        }
    }
}

void printMonthBirthdays() {
    int currentMonth = 6; 
    printf("Aniversariantes do mês:\n");
    int i;
    for (i = 0; i < numContacts; i++) {
        int month = contacts[i].birthday % 10000 / 100;
        if (month == currentMonth) {
            printf("Nome: %s\n", contacts[i].name);
            printf("Telefone: %s\n", contacts[i].phone);
            printf("Aniversário: %d\n", contacts[i].birthday);
            printf("\n");
        }
    }
}

void saveContactsToFile() {
    FILE *file = fopen(FILENAME, "wb");
    if (file != NULL) {
        fwrite(&numContacts, sizeof(int), 1, file);
        fwrite(contacts, sizeof(struct Contact), numContacts, file);
        fclose(file);
        printf("Contatos salvos com sucesso.\n");
    } else {
        printf("Erro ao abrir o arquivo para escrita.\n");
    }
}

void loadContactsFromFile() {
    FILE *file = fopen(FILENAME, "rb");
    if (file != NULL) {
        fread(&numContacts, sizeof(int), 1, file);
        fread(contacts, sizeof(struct Contact), numContacts, file);
        fclose(file);
        printf("Contatos carregados com sucesso.\n");
    } else {
        printf("Arquivo de contatos não encontrado.\n");
    }
}

int main() {
    char choice;
    
    loadContactsFromFile();

    do {
        printf("\nMenu:\n");
        printf("a. Inserir contato\n");
        printf("b. Remover contato\n");
        printf("c. Pesquisar contato pelo nome\n");
        printf("d. Listar todos os contatos\n");
        printf("e. Listar contatos pela letra inicial do nome\n");
        printf("f. Imprimir aniversariantes do mês\n");
        printf("g. Sair\n");
        printf("Escolha: ");
        scanf(" %c", &choice);
        
        switch (choice) {
            case 'a':
                insertContact();
                break;
            case 'b':
                removeContact();
                break;
            case 'c':
                searchContactByName();
                break;
            case 'd':
                listAllContacts();
                break;
            case 'e':
                listContactsByInitialLetter();
                break;
            case 'f':
                printMonthBirthdays();
                break;
            case 'g':
                saveContactsToFile();
                printf("Obrigado por usar o programa!\n");
                break;
            default:
                printf("Escolha inválida.\n");
        }
    } while (choice != 'g');

    return 0;
}
