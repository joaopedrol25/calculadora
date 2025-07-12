#include <stdio.h>


void main(){

    int user = 1;
    float num1, num2, resultado;
    int operador = 0;
    int quebra;
    printf("Boas vindas à calculadora em C!\n\n\n");

        while (user == 1) {

            printf("\nPor favor, escolha um dos operadores abaixo: \n");
            printf("1- Divisão \n");
            printf("2- Multiplicação \n");
            printf("3- Adição \n");
            printf("4 - Subtração\n\n");
                    
            printf("Operador que será utilizado: ");
            scanf("%d", &operador);

                    
                if (operador != 1 && operador != 2 && operador != 3 && operador != 4) {


                    while (quebra == 0){
                        
                        printf("\nVocê digitou um valor indisponível, tente novamente: ");
                        scanf("%d", &operador);

                        if (operador == 1 || operador == 2 || operador == 3 || operador == 4){
                        quebra = 1;
                        }
                    }
                }
                    
                printf("\nDigite o primeiro número: ");
                scanf("%f", &num1);
                printf("Digite o segundo número: ");
                scanf("%f", &num2);
                            
               switch (operador) {
                    case 1:
                    resultado = num1 / num2;
                    printf("\nO resultado da divisão é: %.2f\n", resultado);
                    quebra = 0;
                    break;

                    case 2:
                    resultado = num1 * num2;
                    printf("\nO resultado da multiplicação é %.2f\n", resultado);
                    quebra = 0;
                    break;

                    case 3:
                    resultado = num1 + num2;
                    printf("\nO resultado da soma é %.2f\n", resultado);
                    quebra = 0;
                    break;

                    case 4:
                    resultado = num1 - num2;
                    printf("\nO resultado da subtração é %.2f\n", resultado);
                    quebra = 0;
                    break;
                }
        

        printf("\n Deseja continuar?[Digite 1(sim) ou 0(não)]: ");
        scanf("%d", &user);    

        }
        

    printf("\n\n\n");
    printf("Obrigado por utilizar o nosso programa!\n\n");

}