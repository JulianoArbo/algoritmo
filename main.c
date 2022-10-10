#include <stdio.h>
#include <math.h>

int main(void)
{
        float numero1,
              numero2;
        char operador;

        do
        {
          //dados do desenvolvedor
          //https://github.com/JulianoArbo
            printf("Nome: Juliano Braga Arbo\n");
            printf("Curso: Analise e desenvolvimento de Sistemas\n");
            printf("Universidade: Lasalle\n");
            printf("Matricula: 202214453\n\n");

          //menu de interacao com o usuario
            printf("Selecione a operacao desejada \n");
            printf("1 : soma\n");
            printf("2 : subtracao\n");
            printf("3 : divisao\n");
            printf("4 : multiplicao\n");
            printf("5 : raiz quadrada\n");
            printf("6 : potencia\n");

            printf("\nselecione a operacao desejada e depois os numeros para o calculo: operador / numero1 /numero2\n");
            printf("Para sair digite: 0 0 0\n");

          //scaneando os numeros digitados pelo usuario
            scanf("%c", &operador);
            scanf("%f", &numero1);
            scanf("%f", &numero2);

            system("cls || clear");

            printf("Operacao:%c Calculando: %.2f e %.2f =", operador,numero1, numero2);


            switch( operador )
            {
              //conta referente a opcao escolhida no menu
                case '1':
                        printf("%.2f\n\n", numero1 + numero2);
                        break;

                case '2':
                        printf("%.2f\n\n", numero1 - numero2);
                        break;

                case '3':
                        if(numero2 != 0)
                            printf("%.2f\n\n", numero1 / numero2);
                        else
                            printf("Nao existe divisao por 0\n\n");
                        break;

                case '4':
                        printf("%.2f\n\n", numero1 * numero2);
                        break;

                case '5':
                        if (numero1 != 0 & numero2 ==0)
                          printf("%d\n\n", sqrt(numero1));
                        break;
              
                case '6':
                        printf("%d\n\n", pow(numero1,numero2));
                        break;

                default:
                         printf(" Operador invalido\n\n ");
                       
            }

        }while(operador != 0 && numero1 != 0 && numero2 != 0);

}