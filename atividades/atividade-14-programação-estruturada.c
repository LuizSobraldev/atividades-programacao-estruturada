// Questao 1
#include <stdio.h>

typedef struct
{
  int hora;
  int minuto;
  int segundo;
} Horario;

typedef struct
{
  int dia;
  int mes;
  int ano;
} Data;

typedef struct
{
  Data data;
  Horario horario;
  char descricao[100];
} Compromisso;

int main()
{
  Horario horario = {10, 30, 0};
  Data data = {28, 5, 2024};
  Compromisso compromisso = {data, horario, "Reunião de equipe"};

  printf("Compromisso: %s\n", compromisso.descricao);
  printf("Data: %02d/%02d/%d\n", compromisso.data.dia, compromisso.data.mes, compromisso.data.ano);
  printf("Horário: %02d:%02d:%02d\n", compromisso.horario.hora, compromisso.horario.minuto, compromisso.horario.segundo);

  return 0;
}

// Questao 2
#include <stdio.h>

#define MAX_LENGTH 100

typedef struct
{
  char nome[MAX_LENGTH];
  int idade;
  char endereco[MAX_LENGTH];
} Pessoa;

int main()
{
  Pessoa pessoa;

  printf("Digite o nome da pessoa: ");
  fgets(pessoa.nome, MAX_LENGTH, stdin);

  printf("Digite a idade da pessoa: ");
  scanf("%d", &pessoa.idade);

  while (getchar() != '\n')
    ;

  printf("Digite o endereço da pessoa: ");
  fgets(pessoa.endereco, MAX_LENGTH, stdin);

  printf("\nDados da pessoa:\n");
  printf("Nome: %s", pessoa.nome);
  printf("Idade: %d\n", pessoa.idade);
  printf("Endereço: %s", pessoa.endereco);

  return 0;
}

// Questao 3
#include <stdio.h>

#define MAX_LENGTH 100
#define NUM_ALUNOS 5

typedef struct
{
  char nome[MAX_LENGTH];
  int matricula;
  char curso[MAX_LENGTH];
} Aluno;

int main()
{
  Aluno alunos[NUM_ALUNOS];

  for (int i = 0; i < NUM_ALUNOS; i++)
  {
    printf("Digite o nome do aluno %d: ", i + 1);
    fgets(alunos[i].nome, MAX_LENGTH, stdin);

    printf("Digite o número de matrícula do aluno %d: ", i + 1);
    scanf("%d", &alunos[i].matricula);

    while (getchar() != '\n')
      ;

    printf("Digite o curso do aluno %d: ", i + 1);
    fgets(alunos[i].curso, MAX_LENGTH, stdin);
  }

  printf("\nDados dos alunos:\n");
  for (int i = 0; i < NUM_ALUNOS; i++)
  {
    printf("Aluno %d\n", i + 1);
    printf("Nome: %s", alunos[i].nome);
    printf("Número de matrícula: %d\n", alunos[i].matricula);
    printf("Curso: %s", alunos[i].curso);
    printf("\n");
  }

  return 0;
}

// Questao 4
#include <stdio.h>

#define MAX_LENGTH 100
#define NUM_ALUNOS 5
#define NOTA_MINIMA 6

typedef struct
{
  int matricula;
  char nome[MAX_LENGTH];
  float nota1;
  float nota2;
  float nota3;
  float media;
} Aluno;

float calcularMedia(Aluno aluno)
{
  return (aluno.nota1 + aluno.nota2 + aluno.nota3) / 3.0;
}

int main()
{
  Aluno alunos[NUM_ALUNOS];
  float maiorNota1 = 0;
  float maiorMedia = 0;
  int indiceMaiorNota1 = -1;
  int indiceMaiorMedia = -1;

  for (int i = 0; i < NUM_ALUNOS; i++)
  {
    printf("Digite a matrícula do aluno %d: ", i + 1);
    scanf("%d", &alunos[i].matricula);
    while (getchar() != '\n')
      ;

    printf("Digite o nome do aluno %d: ", i + 1);
    fgets(alunos[i].nome, MAX_LENGTH, stdin);

    printf("Digite a nota da primeira prova do aluno %d: ", i + 1);
    scanf("%f", &alunos[i].nota1);

    printf("Digite a nota da segunda prova do aluno %d: ", i + 1);
    scanf("%f", &alunos[i].nota2);

    printf("Digite a nota da terceira prova do aluno %d: ", i + 1);
    scanf("%f", &alunos[i].nota3);

    alunos[i].media = calcularMedia(alunos[i]);

    if (alunos[i].nota1 > maiorNota1)
    {
      maiorNota1 = alunos[i].nota1;
      indiceMaiorNota1 = i;
    }

    if (alunos[i].media > maiorMedia)
    {
      maiorMedia = alunos[i].media;
      indiceMaiorMedia = i;
    }
  }

  printf("\nAluno com a maior nota na primeira prova:\n");
  printf("Nome: %s", alunos[indiceMaiorNota1].nome);
  printf("Matrícula: %d\n", alunos[indiceMaiorNota1].matricula);
  printf("Nota da primeira prova: %.2f\n\n", alunos[indiceMaiorNota1].nota1);

  printf("Aluno com a maior média geral:\n");
  printf("Nome: %s", alunos[indiceMaiorMedia].nome);
  printf("Matrícula: %d\n", alunos[indiceMaiorMedia].matricula);
  printf("Média geral: %.2f\n\n", alunos[indiceMaiorMedia].media);

  printf("Situação dos alunos:\n");
  for (int i = 0; i < NUM_ALUNOS; i++)
  {
    printf("Nome: %s", alunos[i].nome);
    printf("Matrícula: %d\n", alunos[i].matricula);
    if (alunos[i].media >= NOTA_MINIMA)
    {
      printf("Situação: Aprovado\n\n");
    }
    else
    {
      printf("Situação: Reprovado\n\n");
    }
  }

  return 0;
}

// Questao 5
#include <stdio.h>

struct Vetor
{
  float x;
  float y;
  float z;
};

struct Vetor somaVetores(struct Vetor vetor1, struct Vetor vetor2)
{
  struct Vetor resultado;

  resultado.x = vetor1.x + vetor2.x;
  resultado.y = vetor1.y + vetor2.y;
  resultado.z = vetor1.z + vetor2.z;

  return resultado;
}

int main()
{
  struct Vetor vetor1 = {1.5, 2.5, 3.5};
  struct Vetor vetor2 = {2.5, 3.5, 4.5};
  struct Vetor resultado;

  resultado = somaVetores(vetor1, vetor2);

  printf("Resultado da soma dos vetores:\n");
  printf("x: %.2f\n", resultado.x);
  printf("y: %.2f\n", resultado.y);
  printf("z: %.2f\n", resultado.z);

  return 0;
}

// Questao 6
#include <stdio.h>

#define MAX_ALUNOS 10

typedef struct
{
  int matricula;
  char nome[50];
  int codigoDisciplina;
  float nota1;
  float nota2;
  float mediaFinal;
} Aluno;

float calcularMediaFinal(float nota1, float nota2)
{
  return (nota1 * 1.0 + nota2 * 2.0) / 3.0;
}

int main()
{
  Aluno alunos[MAX_ALUNOS];

  printf("Digite os dados dos alunos:\n");
  for (int i = 0; i < MAX_ALUNOS; i++)
  {
    printf("\nAluno %d:\n", i + 1);
    printf("Matrícula: ");
    scanf("%d", &alunos[i].matricula);
    printf("Nome: ");
    scanf(" %[^\n]s", alunos[i].nome);
    printf("Código da Disciplina: ");
    scanf("%d", &alunos[i].codigoDisciplina);
    printf("Nota 1: ");
    scanf("%f", &alunos[i].nota1);
    printf("Nota 2: ");
    scanf("%f", &alunos[i].nota2);

    alunos[i].mediaFinal = calcularMediaFinal(alunos[i].nota1, alunos[i].nota2);
  }

  printf("\nLista final de alunos com suas médias finais:\n");
  printf("Matrícula\tNome\t\tCód. Disciplina\tNota 1\tNota 2\tMédia Final\n");
  for (int i = 0; i < MAX_ALUNOS; i++)
  {
    printf("%d\t\t%s\t\t%d\t\t%.1f\t%.1f\t%.2f\n", alunos[i].matricula, alunos[i].nome, alunos[i].codigoDisciplina, alunos[i].nota1, alunos[i].nota2, alunos[i].mediaFinal);
  }

  return 0;
}

// Questao 7
#include <stdio.h>

#define MAX_LENGTH 31
#define MAX_SETORES 100

typedef struct
{
  char nome[MAX_LENGTH];
  int idade;
  char sexo;
  char cpf[12];
  char dataNascimento[11];
  int codigoSetor;
  char cargo[MAX_LENGTH];
  float salario;
} Funcionario;

int main()
{
  Funcionario funcionario;

  printf("Digite o nome do funcionário: ");
  fgets(funcionario.nome, MAX_LENGTH, stdin);

  printf("Digite a idade do funcionário: ");
  scanf("%d", &funcionario.idade);

  printf("Digite o sexo do funcionário (M/F): ");
  scanf(" %c", &funcionario.sexo);

  printf("Digite o CPF do funcionário: ");
  scanf("%s", funcionario.cpf);

  printf("Digite a data de nascimento do funcionário (DD/MM/AAAA): ");
  scanf("%s", funcionario.dataNascimento);

  printf("Digite o código do setor onde o funcionário trabalha (0-%d): ", MAX_SETORES - 1);
  scanf("%d", &funcionario.codigoSetor);

  printf("Digite o cargo que o funcionário ocupa (até 30 caracteres): ");
  scanf(" %[^\n]s", funcionario.cargo);

  printf("Digite o salário do funcionário: ");
  scanf("%f", &funcionario.salario);

  printf("\nDados do funcionário:\n");
  printf("Nome: %s", funcionario.nome);
  printf("Idade: %d\n", funcionario.idade);
  printf("Sexo: %c\n", funcionario.sexo);
  printf("CPF: %s\n", funcionario.cpf);
  printf("Data de Nascimento: %s\n", funcionario.dataNascimento);
  printf("Código do Setor: %d\n", funcionario.codigoSetor);
  printf("Cargo: %s\n", funcionario.cargo);
  printf("Salário: R$ %.2f\n", funcionario.salario);

  return 0;
}

// Questao 8
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100
#define NUM_PESSOAS 5

typedef struct
{
  char nome[MAX_LENGTH];
  char endereco[MAX_LENGTH];
  char telefone[MAX_LENGTH];
} Pessoa;

int compararStrings(const void *a, const void *b)
{
  return strcmp(((Pessoa *)a)->nome, ((Pessoa *)b)->nome);
}

int main()
{
  Pessoa pessoas[NUM_PESSOAS];

  printf("Digite os dados das pessoas:\n");
  for (int i = 0; i < NUM_PESSOAS; i++)
  {
    printf("\nPessoa %d:\n", i + 1);
    printf("Nome: ");
    fgets(pessoas[i].nome, MAX_LENGTH, stdin);

    printf("Endereço: ");
    fgets(pessoas[i].endereco, MAX_LENGTH, stdin);

    printf("Telefone: ");
    fgets(pessoas[i].telefone, MAX_LENGTH, stdin);
  }

  // Ordena as pessoas em ordem alfabética pelo nome
  qsort(pessoas, NUM_PESSOAS, sizeof(Pessoa), compararStrings);

  printf("\nPessoas em ordem alfabética:\n");
  for (int i = 0; i < NUM_PESSOAS; i++)
  {
    printf("\nPessoa %d:\n", i + 1);
    printf("Nome: %s", pessoas[i].nome);
    printf("Endereço: %s", pessoas[i].endereco);
    printf("Telefone: %s", pessoas[i].telefone);
  }

  return 0;
}

// Questao 9
#include <stdio.h>

#define MAX_LENGTH 50
#define NUM_ALUNOS 10
#define NOTA_MINIMA 5.0

typedef struct
{
  char nome[MAX_LENGTH];
  int matricula;
  float mediaFinal;
} Aluno;

int main()
{
  Aluno alunos[NUM_ALUNOS];
  Aluno aprovados[NUM_ALUNOS], reprovados[NUM_ALUNOS];
  int contadorAprovados = 0, contadorReprovados = 0;

  printf("Digite os dados dos alunos (nome, matrícula, média final):\n");
  for (int i = 0; i < NUM_ALUNOS; i++)
  {
    printf("Aluno %d:\n", i + 1);
    printf("Nome: ");
    scanf(" %[^\n]s", alunos[i].nome);
    printf("Matrícula: ");
    scanf("%d", &alunos[i].matricula);
    printf("Média final: ");
    scanf("%f", &alunos[i].mediaFinal);
    if (alunos[i].mediaFinal >= NOTA_MINIMA)
    {
      aprovados[contadorAprovados++] = alunos[i];
    }
    else
    {
      reprovados[contadorReprovados++] = alunos[i];
    }
  }

  printf("\nAlunos Aprovados:\n");
  for (int i = 0; i < contadorAprovados; i++)
  {
    printf("Nome: %s\n", aprovados[i].nome);
    printf("Matrícula: %d\n", aprovados[i].matricula);
    printf("Média final: %.2f\n\n", aprovados[i].mediaFinal);
  }

  printf("Alunos Reprovados:\n");
  for (int i = 0; i < contadorReprovados; i++)
  {
    printf("Nome: %s\n", reprovados[i].nome);
    printf("Matrícula: %d\n", reprovados[i].matricula);
    printf("Média final: %.2f\n\n", reprovados[i].mediaFinal);
  }

  return 0;
}

// Questao 10
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_CARTAS 52
#define NUM_JOGADORES 2
#define CARTAS_POR_JOGADOR 5

typedef struct
{
  char valor[5];
  char naipe[10];
} Carta;

void inicializarBaralho(Carta baralho[])
{
  char naipes[][10] = {"Ouros", "Paus", "Copas", "Espadas"};
  char valores[][5] = {"Ás", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Valete", "Dama", "Rei"};
  int carta = 0;

  for (int n = 0; n < 4; n++)
  {
    for (int v = 0; v < 13; v++)
    {
      sprintf(baralho[carta].valor, "%s", valores[v]);
      sprintf(baralho[carta].naipe, "%s", naipes[n]);
      carta++;
    }
  }
}

void embaralharBaralho(Carta baralho[])
{
  srand(time(NULL));
  for (int i = 0; i < NUM_CARTAS; i++)
  {
    int j = rand() % NUM_CARTAS;
    Carta temp = baralho[i];
    baralho[i] = baralho[j];
    baralho[j] = temp;
  }
}

void distribuirCartas(Carta baralho[], Carta jogador1[], Carta jogador2[])
{
  for (int i = 0; i < CARTAS_POR_JOGADOR; i++)
  {
    jogador1[i] = baralho[i];
    jogador2[i] = baralho[i + CARTAS_POR_JOGADOR];
  }
}

int main()
{
  Carta baralho[NUM_CARTAS];
  Carta jogador1[CARTAS_POR_JOGADOR], jogador2[CARTAS_POR_JOGADOR];

  inicializarBaralho(baralho);
  embaralharBaralho(baralho);

  distribuirCartas(baralho, jogador1, jogador2);

  printf("Cartas do Jogador 1:\n");
  for (int i = 0; i < CARTAS_POR_JOGADOR; i++)
  {
    printf("%s de %s\n", jogador1[i].valor, jogador1[i].naipe);
  }

  printf("\nCartas do Jogador 2:\n");
  for (int i = 0; i < CARTAS_POR_JOGADOR; i++)
  {
    printf("%s de %s\n", jogador2[i].valor, jogador2[i].naipe);
  }

  return 0;
}

// Questao 11
#include <stdio.h>

#define MAX_CARROS 5
#define MAX_MARCA 16

typedef struct
{
  char marca[MAX_MARCA];
  int ano;
  float preco;
} Carro;

int main()
{
  Carro carros[MAX_CARROS];
  float valor;

  printf("Digite os dados dos carros:\n");
  for (int i = 0; i < MAX_CARROS; i++)
  {
    printf("\nCarro %d:\n", i + 1);
    printf("Marca (até 15 letras): ");
    scanf("%15s", carros[i].marca);
    printf("Ano: ");
    scanf("%d", &carros[i].ano);
    printf("Preço: ");
    scanf("%f", &carros[i].preco);
  }

  do
  {
    printf("\nDigite um valor para filtrar (0 para sair): ");
    scanf("%f", &valor);

    if (valor == 0)
      break;

    printf("\nCarros com preço menor que %.2f:\n", valor);
    for (int i = 0; i < MAX_CARROS; i++)
    {
      if (carros[i].preco < valor)
      {
        printf("Marca: %s\n", carros[i].marca);
        printf("Ano: %d\n", carros[i].ano);
        printf("Preço: %.2f\n", carros[i].preco);
        printf("\n");
      }
    }
  } while (valor != 0);

  printf("Programa encerrado.\n");

  return 0;
}

// Questao 12
#include <stdio.h>
#include <string.h>

#define MAX_LIVROS 5
#define MAX_TITULO 31
#define MAX_AUTOR 16

typedef struct
{
  char titulo[MAX_TITULO];
  char autor[MAX_AUTOR];
  int ano;
} Livro;

int main()
{
  Livro livros[MAX_LIVROS];
  char busca[MAX_TITULO];
  int encontrados = 0;

  printf("Digite os dados dos livros:\n");
  for (int i = 0; i < MAX_LIVROS; i++)
  {
    printf("\nLivro %d:\n", i + 1);
    printf("Título (até 30 letras): ");
    scanf("%30s", livros[i].titulo);
    printf("Autor (até 15 letras): ");
    scanf("%15s", livros[i].autor);
    printf("Ano: ");
    scanf("%d", &livros[i].ano);
  }

  printf("\nDigite o título do livro que deseja buscar: ");
  scanf("%30s", busca);

  printf("\nLivros encontrados com o título '%s':\n", busca);
  for (int i = 0; i < MAX_LIVROS; i++)
  {
    if (strcmp(livros[i].titulo, busca) == 0)
    {
      printf("Título: %s\n", livros[i].titulo);
      printf("Autor: %s\n", livros[i].autor);
      printf("Ano: %d\n", livros[i].ano);
      printf("\n");
      encontrados++;
    }
  }

  if (encontrados == 0)
  {
    printf("Nenhum livro encontrado com o título '%s'.\n", busca);
  }

  return 0;
}

// Questao 13
#include <stdio.h>

#define MAX_ELETRODOMESTICOS 5
#define MAX_NOME 16

typedef struct
{
  char nome[MAX_NOME];
  float potencia;
  float tempo_ativo_por_dia;
} Eletrodomestico;

int main()
{
  Eletrodomestico eletrodomesticos[MAX_ELETRODOMESTICOS];
  float tempo_dias;
  float consumo_total = 0.0;

  printf("Digite os dados dos eletrodomésticos:\n");
  for (int i = 0; i < MAX_ELETRODOMESTICOS; i++)
  {
    printf("\nEletrodoméstico %d:\n", i + 1);
    printf("Nome (até 15 letras): ");
    scanf("%15s", eletrodomesticos[i].nome);
    printf("Potência (em kW): ");
    scanf("%f", &eletrodomesticos[i].potencia);
    printf("Tempo ativo por dia (em horas): ");
    scanf("%f", &eletrodomesticos[i].tempo_ativo_por_dia);
  }

  printf("\nDigite o tempo em dias: ");
  scanf("%f", &tempo_dias);

  for (int i = 0; i < MAX_ELETRODOMESTICOS; i++)
  {
    consumo_total += eletrodomesticos[i].potencia * eletrodomesticos[i].tempo_ativo_por_dia * tempo_dias;
  }

  printf("\nConsumo total de energia: %.2f kWh\n", consumo_total);

  printf("\nConsumo relativo de cada eletrodoméstico:\n");
  for (int i = 0; i < MAX_ELETRODOMESTICOS; i++)
  {
    float consumo_relativo = (eletrodomesticos[i].potencia * eletrodomesticos[i].tempo_ativo_por_dia * tempo_dias) / consumo_total * 100.0;
    printf("%s: %.2f%%\n", eletrodomesticos[i].nome, consumo_relativo);
  }

  return 0;
}

// Questao 14
#include <stdio.h>
#include <stdbool.h>

#define MAX_PRODUTOS 5
#define MAX_NOME 16

typedef struct
{
  int codigo;
  char nome[MAX_NOME];
  float preco;
  int quantidade;
} Produto;

Produto *buscarProduto(Produto produtos[], int codigo)
{
  for (int i = 0; i < MAX_PRODUTOS; i++)
  {
    if (produtos[i].codigo == codigo)
    {
      return &produtos[i];
    }
  }
  return NULL;
}

int main()
{
  Produto produtos[MAX_PRODUTOS];
  int codigo_pedido, quantidade_pedido;

  printf("Digite os dados dos produtos:\n");
  for (int i = 0; i < MAX_PRODUTOS; i++)
  {
    printf("\nProduto %d:\n", i + 1);
    printf("Código: ");
    scanf("%d", &produtos[i].codigo);
    if (produtos[i].codigo == 0)
    {
      break;
    }
    printf("Nome (até 15 letras): ");
    scanf("%15s", produtos[i].nome);
    printf("Preço: ");
    scanf("%f", &produtos[i].preco);
    printf("Quantidade: ");
    scanf("%d", &produtos[i].quantidade);
  }

  printf("\nDigite o código do produto desejado (ou 0 para sair): ");
  scanf("%d", &codigo_pedido);
  while (codigo_pedido != 0)
  {
    printf("Digite a quantidade desejada: ");
    scanf("%d", &quantidade_pedido);

    Produto *produto = buscarProduto(produtos, codigo_pedido);
    if (produto != NULL)
    {
      if (produto->quantidade >= quantidade_pedido)
      {
        produto->quantidade -= quantidade_pedido;
        printf("Pedido atendido. Produto '%s' removido do estoque.\n", produto->nome);
      }
      else
      {
        printf("Erro: Estoque insuficiente para atender ao pedido.\n");
      }
    }
    else
    {
      printf("Erro: Produto não encontrado.\n");
    }

    printf("\nDigite o código do produto desejado (ou 0 para sair): ");
    scanf("%d", &codigo_pedido);
  }

  printf("Programa encerrado.\n");

  return 0;
}

// Questao 15
#include <stdio.h>
#include <string.h>

#define MAX_RECEITAS 5
#define MAX_NOME_RECEITA 26
#define MAX_NOME_INGREDIENTE 31

typedef struct
{
  char nome[MAX_NOME_INGREDIENTE];
  int quantidade;
} Ingrediente;

typedef struct
{
  char nome[MAX_NOME_RECEITA];
  int quantidade_ingredientes;
  Ingrediente ingredientes[10];
} Receita;

Receita *buscarReceita(Receita receitas[], char nome[])
{
  for (int i = 0; i < MAX_RECEITAS; i++)
  {
    if (strcmp(receitas[i].nome, nome) == 0)
    {
      return &receitas[i];
    }
  }
  return NULL;
}

int main()
{
  Receita receitas[MAX_RECEITAS];
  char nome_busca[MAX_NOME_RECEITA];

  printf("Digite os dados das receitas:\n");
  for (int i = 0; i < MAX_RECEITAS; i++)
  {
    printf("\nReceita %d:\n", i + 1);
    printf("Nome (até 25 letras): ");
    scanf("%25s", receitas[i].nome);
    printf("Quantidade de ingredientes: ");
    scanf("%d", &receitas[i].quantidade_ingredientes);

    printf("Digite os ingredientes:\n");
    for (int j = 0; j < receitas[i].quantidade_ingredientes; j++)
    {
      printf("Ingrediente %d:\n", j + 1);
      printf("Nome (até 30 letras): ");
      scanf("%30s", receitas[i].ingredientes[j].nome);
      printf("Quantidade: ");
      scanf("%d", &receitas[i].ingredientes[j].quantidade);
    }
  }

  printf("\nDigite o nome da receita que deseja buscar (ou deixe em branco para sair): ");
  scanf("%25s", nome_busca);
  while (strlen(nome_busca) > 0)
  {
    Receita *receita = buscarReceita(receitas, nome_busca);
    if (receita != NULL)
    {
      printf("\nReceita encontrada:\n");
      printf("Nome: %s\n", receita->nome);
      printf("Ingredientes:\n");
      for (int i = 0; i < receita->quantidade_ingredientes; i++)
      {
        printf("- %s: %d\n", receita->ingredientes[i].nome, receita->ingredientes[i].quantidade);
      }
    }
    else
    {
      printf("Receita não encontrada.\n");
    }

    printf("\nDigite o nome da receita que deseja buscar (ou deixe em branco para sair): ");
    scanf("%25s", nome_busca);
  }

  printf("Programa encerrado.\n");

  return 0;
}

#include <stdio.h>
#include <string.h>

#define MAX_DIRETORES 5
#define MAX_NOME_DIRETOR 21
#define MAX_FILMES 10
#define MAX_NOME_FILME 51

typedef struct
{
  char nome[MAX_NOME_FILME];
  int ano;
  int duracao;
} Filme;

typedef struct
{
  char nome[MAX_NOME_DIRETOR];
  int quantidade_filmes;
  Filme filmes[MAX_FILMES];
} Diretor;

Diretor *buscarDiretor(Diretor diretores[], char nome[])
{
  for (int i = 0; i < MAX_DIRETORES; i++)
  {
    if (strcmp(diretores[i].nome, nome) == 0)
    {
      return &diretores[i];
    }
  }
  return NULL;
}

int main()
{
  Diretor diretores[MAX_DIRETORES];
  char nome_busca[MAX_NOME_DIRETOR];

  printf("Digite os dados dos diretores:\n");
  for (int i = 0; i < MAX_DIRETORES; i++)
  {
    printf("\nDiretor %d:\n", i + 1);
    printf("Nome (até 20 letras): ");
    scanf("%20s", diretores[i].nome);
    printf("Quantidade de filmes: ");
    scanf("%d", &diretores[i].quantidade_filmes);

    for (int j = 0; j < diretores[i].quantidade_filmes; j++)
    {
      printf("\nFilme %d:\n", j + 1);
      printf("Nome (até 50 letras): ");
      scanf("%50s", diretores[i].filmes[j].nome);
      printf("Ano: ");
      scanf("%d", &diretores[i].filmes[j].ano);
      printf("Duração (em minutos): ");
      scanf("%d", &diretores[i].filmes[j].duracao);
    }
  }

  printf("\nDigite o nome do diretor que deseja buscar (ou deixe em branco para sair): ");
  scanf("%20s", nome_busca);
  while (strlen(nome_busca) > 0)
  {
    Diretor *diretor = buscarDiretor(diretores, nome_busca);
    if (diretor != NULL)
    {
      printf("\nFilmes do diretor '%s':\n", diretor->nome);
      for (int i = 0; i < diretor->quantidade_filmes; i++)
      {
        printf("- %s (%d), %d minutos\n", diretor->filmes[i].nome, diretor->filmes[i].ano, diretor->filmes[i].duracao);
      }
    }
    else
    {
      printf("Diretor não encontrado.\n");
    }

    printf("\nDigite o nome do diretor que deseja buscar (ou deixe em branco para sair): ");
    scanf("%20s", nome_busca);
  }

  printf("Programa encerrado.\n");

  return 0;
}

// Questao 17
#include <stdio.h>
#include <string.h>

#define MAX_PESSOAS 100
#define MAX_NOME 51
#define MAX_EMAIL 51
#define MAX_RUA 51
#define MAX_OBSERVACOES 101

typedef struct
{
  char rua[MAX_RUA];
  int numero;
  char complemento[MAX_RUA];
  char bairro[MAX_RUA];
  char cep[11];
  char cidade[MAX_RUA];
  char estado[3];
  char pais[MAX_RUA];
} Endereco;

typedef struct
{
  int ddd;
  char numero[10];
} Telefone;

typedef struct
{
  int dia;
  int mes;
  int ano;
} DataAniversario;

typedef struct
{
  char nome[MAX_NOME];
  char email[MAX_EMAIL];
  Endereco endereco;
  Telefone telefone;
  DataAniversario aniversario;
  char observacoes[MAX_OBSERVACOES];
} Pessoa;

Pessoa agenda[MAX_PESSOAS];
int total_pessoas = 0;

int stricmp(const char *s1, const char *s2)
{
  while (*s1 && *s2 && tolower(*s1) == tolower(*s2))
  {
    s1++;
    s2++;
  }
  return tolower(*s1) - tolower(*s2);
}

Pessoa *buscarPessoaPorNome(char nome[])
{
  for (int i = 0; i < total_pessoas; i++)
  {
    if (stricmp(agenda[i].nome, nome) == 0)
    {
      return &agenda[i];
    }
  }
  return NULL;
}

void inserirPessoa(Pessoa pessoa)
{
  int i = total_pessoas - 1;
  while (i >= 0 && stricmp(agenda[i].nome, pessoa.nome) > 0)
  {
    agenda[i + 1] = agenda[i];
    i--;
  }
  agenda[i + 1] = pessoa;
  total_pessoas++;
}

void retirarPessoa(char nome[])
{
  int i, j;
  for (i = 0; i < total_pessoas; i++)
  {
    if (stricmp(agenda[i].nome, nome) == 0)
    {
      for (j = i; j < total_pessoas - 1; j++)
      {
        agenda[j] = agenda[j + 1];
      }
      total_pessoas--;
      break;
    }
  }
}

void imprimirDadosPessoa(Pessoa pessoa)
{
  printf("Nome: %s\n", pessoa.nome);
  printf("E-mail: %s\n", pessoa.email);
  printf("Endereço: %s, %d, %s, %s, %s, %s, %s\n", pessoa.endereco.rua, pessoa.endereco.numero, pessoa.endereco.complemento,
         pessoa.endereco.bairro, pessoa.endereco.cep, pessoa.endereco.cidade, pessoa.endereco.estado);
  printf("Telefone: (%d) %s\n", pessoa.telefone.ddd, pessoa.telefone.numero);
  printf("Data de Aniversário: %d/%d/%d\n", pessoa.aniversario.dia, pessoa.aniversario.mes, pessoa.aniversario.ano);
  printf("Observações: %s\n", pessoa.observacoes);
  printf("\n");
}

void imprimirAgenda()
{
  printf("Agenda Telefônica:\n");
  for (int i = 0; i < total_pessoas; i++)
  {
    imprimirDadosPessoa(agenda[i]);
  }
}

void buscarPorMesAniversario(int mes)
{
  printf("Pessoas que fazem aniversário no mês %d:\n", mes);
  for (int i = 0; i < total_pessoas; i++)
  {
    if (agenda[i].aniversario.mes == mes)
    {
      imprimirDadosPessoa(agenda[i]);
    }
  }
}

void buscarPorDiaMesAniversario(int dia, int mes)
{
  printf("Pessoas que fazem aniversário no dia %d do mês %d:\n", dia, mes);
  for (int i = 0; i < total_pessoas; i++)
  {
    if (agenda[i].aniversario.dia == dia && agenda[i].aniversario.mes == mes)
    {
      imprimirDadosPessoa(agenda[i]);
    }
  }
}

int main()
{
  int opcao;
  char nome_busca[MAX_NOME];
  int mes_busca, dia_busca;

  do
  {
    printf("\nMenu Principal:\n");
    printf("1. Buscar por nome\n");
    printf("2. Buscar por mês de aniversário\n");
    printf("3. Buscar por dia e mês de aniversário\n");
    printf("4. Inserir pessoa\n");
    printf("5. Retirar pessoa\n");
    printf("6. Imprimir agenda\n");
    printf("7. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
      printf("Digite o nome da pessoa que deseja buscar: ");
      scanf("%s", nome_busca);
      Pessoa *pessoa = buscarPessoaPorNome(nome_busca);
      if (pessoa != NULL)
      {
        printf("\nDados da pessoa:\n");
        imprimirDadosPessoa(*pessoa);
      }
      else
      {
        printf("Pessoa não encontrada.\n");
      }
      break;
    case 2:
      printf("Digite o mês de aniversário que deseja buscar: ");
      scanf("%d", &mes_busca);
      buscarPorMesAniversario(mes_busca);
      break;
    case 3:
      printf("Digite o dia e o mês de aniversário que deseja buscar (dia mês): ");
      scanf("%d %d", &dia_busca, &mes_busca);
      buscarPorDiaMesAniversario(dia_busca, mes_busca);
      break;
    case 4:
      printf("Digite os dados da pessoa a ser inserida:\n");
      printf("Nome: ");
      scanf("%s", agenda[total_pessoas].nome);
      printf("E-mail: ");
      scanf("%s", agenda[total_pessoas].email);
      printf("Endereço (Rua Número Complemento Bairro CEP Cidade Estado País): ");
      scanf("%s %d %s %s %s %s %s %s", agenda[total_pessoas].endereco.rua, &agenda[total_pessoas].endereco.numero,
            agenda[total_pessoas].endereco.complemento, agenda[total_pessoas].endereco.bairro, agenda[total_pessoas].endereco.cep,
            agenda[total_pessoas].endereco.cidade, agenda[total_pessoas].endereco.estado, agenda[total_pessoas].endereco.pais);
      printf("Telefone (DDD Número): ");
      scanf("%d %s", &agenda[total_pessoas].telefone.ddd, agenda[total_pessoas].telefone.numero);
      printf("Data de Aniversário (dia mês ano): ");
      scanf("%d %d %d", &agenda[total_pessoas].aniversario.dia, &agenda[total_pessoas].aniversario.mes,
            &agenda[total_pessoas].aniversario.ano);
      printf("Observações: ");
      scanf("%s", agenda[total_pessoas].observacoes);
      inserirPessoa(agenda[total_pessoas]);
      printf("Pessoa inserida com sucesso.\n");
      break;
    case 5:
      printf("Digite o nome da pessoa que deseja retirar: ");
      scanf("%s", nome_busca);
      retirarPessoa(nome_busca);
      printf("Pessoa retirada da agenda.\n");
      break;
    case 6:
      imprimirAgenda();
      break;
    case 7:
      printf("Encerrando o programa.\n");
      break;
    default:
      printf("Opção inválida.\n");
    }
  } while (opcao != 7);

  return 0;
}
