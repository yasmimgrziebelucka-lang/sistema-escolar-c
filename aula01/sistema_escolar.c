#include <stdio.h>
#include <string.h>

struct Aluno {
int matricula;
char nome[50];
float nota1;
float nota2;
float nota3;
float media;
};

int main() {
struct Aluno alunos[30];
int totalAlunos = 0;
int opcao;
int matriculaBusca;
int encontrado;

while (1) {
printf("\n==============================\n");
printf(" SISTEMA ESCOLAR\n");
printf("==============================\n");
printf("1 - Cadastrar aluno\n");
printf("2 - Listar alunos\n");
printf("3 - Buscar aluno\n");
printf("4 - Sair\n");
printf("\nEscolha uma opcao: ");
scanf("%d", &opcao);
  
switch (opcao) {
case 1:
if (totalAlunos >= 30) {
printf("\nLimite de alunos atingido!\n");
break;
}
printf("\n===== CADASTRO DE ALUNO =====\n");
printf("Digite a matricula: ");
scanf("%d", &alunos[totalAlunos].matricula);
printf("Digite o nome: ");
scanf(" %[^\n]", alunos[totalAlunos].nome);
alunos[totalAlunos].nota1 = 0;
alunos[totalAlunos].nota2 = 0;
alunos[totalAlunos].nota3 = 0;
alunos[totalAlunos].media = 0;
totalAlunos++;
printf("\nAluno cadastrado com sucesso!\n");
break;

case 2:
printf("\n===== ALUNOS CADASTRADOS =====\n");
if (totalAlunos == 0) {
printf("Nenhum aluno cadastrado.\n");
} else {
for (int i = 0; i < totalAlunos; i++) {
printf("\nAluno %d\n", i + 1);
printf("Matricula: %d\n", alunos[i].matricula);
printf("Nome: %s\n", alunos[i].nome);
}
}
break;

case 3:
printf("\n===== BUSCAR ALUNO =====\n");
printf("Digite a matricula: ");
scanf("%d", &matriculaBusca);
encontrado = 0;
for (int i = 0; i < totalAlunos; i++) {
if (alunos[i].matricula == matriculaBusca) {
printf("\nAluno encontrado!\n");
printf("Matricula: %d\n", alunos[i].matricula);
printf("Nome: %s\n", alunos[i].nome);
encontrado = 1;
break;
}
}
if (encontrado == 0) {
printf("\nAluno nao encontrado.\n");
}
break;
  
case 4:
printf("\nSistema encerrado.\n");
return 0;
default:
printf("\nOpcao invalida!\n");
}
}
  
return 0;
}
