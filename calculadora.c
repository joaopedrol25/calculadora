#include <stdio.h>

float divisao(float num1, float num2) { return num1 / num2; }

float multiplicacao(float num1, float num2) { return num1 * num2; }

float adicao(float num1, float num2) { return num1 + num2; }

float subtracao(float num1, float num2) { return num1 - num2; }

float exponenciacao(float num1, float num2) {
  for (int i = 0; i < num2; i++) {
    int resultado = 1;
    resultado = resultado * num1;
    return resultado;
  }
}

void main() {

  char user = 's';
  float num1 = 0, num2 = 0;
  int operador = 0;

  printf("Boas vindas à calculadora em C!\n\n");

  while (user == 's' || user == 'S') {

    printf("\nPor favor, escolha um dos operadores abaixo: \n");
    printf("1- Divisão \n");
    printf("2- Multiplicação \n");
    printf("3- Adição \n");
    printf("4- Subtração\n");
    printf("5- Exponenciação\n\n");

    printf("Operador que será utilizado: ");
    scanf("%d", &operador);

    while (operador < 1 || operador > 5) {

      printf("\nVocê digitou um valor indisponível, tente novamente: ");
      scanf("%d", &operador);
    }

    printf("\nDigite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    switch (operador) {
    case 1:
      printf("\nO resultado da divisão é: %.2f\n", divisao(num1, num2));
      break;

    case 2:
      printf("\nO resultado da multiplicação é %.2f\n",
             multiplicacao(num1, num2));
      break;

    case 3:
      printf("\nO resultado da soma é %.2f\n", adicao(num1, num2));
      break;

    case 4:
      printf("\nO resultado da subtração é %.2f\n", subtracao(num1, num2));
      break;

    case 5:
      printf("\nO resultado da exponenciação é %.2f\n",
             exponenciacao(num1, num2));
      break;
    }

    printf("\n Deseja continuar?[S/n]: ");
    scanf(" %c", &user);
  }

  printf("\n");
  printf("Obrigado por utilizar o nosso programa!\n\n");
}
