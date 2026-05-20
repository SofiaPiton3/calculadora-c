#include <stdio.h>
#include "funcion_multiplicar.c"

void main()
{
    int opcao;
    int numero1;
    int numero2;
    int resultado;
    char resposta = 'S';

    while (resposta == 'S')
    {
        printf("opção1 - Soma\n");
        printf("opção2 - Subtração\n");
        printf("opção3 - Divisão\n");
        printf("opção4 - Multiplicação\n");
        printf("Escolha uma Opção: \n");
        scanf("%d", &opcao);
        getchar();

        if (opcao == 4)
        {
            printf("Opção Disponível\n");
            printf("Digite o Primeiro Número: ");
            scanf("%d", &numero1);
            printf("Digite o Segundo Número: ");
            scanf("%d", &numero2);
            resultado = multiplicar(numero1, numero2);
            printf("Resultado da Multiplicação: %d\n", resultado);
        }
        else
        {
            printf("Opção Indisponível\n");
        }
        printf("Você Deseja Executar Outra Operação Sim(S) ou Não(N)? ");
        scanf("%c", &resposta);
    }
}