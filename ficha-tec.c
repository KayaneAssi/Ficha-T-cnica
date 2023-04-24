#include <stdio.h>
#include <string.h>

int main(void) {
  int idade;
  double salario, altura;
  char genero;
  char nome[50];

  idade = 20;
  salario = 1825;
  altura = 1.5;
  genero = 'F';
  strcpy(nome, "Maria Silva");

    printf("IDADE = %d\n", idade);
    printf("SALARIO = %.2lf\n", salario);
    printf("ALTURA = %.2lf\n", altura);
    printf("GENERO = %c\n", genero);
    printf("NOME = %s\n", nome);

  return 0;
}