#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    int valor1, valor2, resultado;
    char opcao;

    printf("Digite o primeiro numero: ");
    scanf("%d", &valor1);

    printf("Digite o segundo numero: ");
    scanf("%d", &valor2);

    printf("Digite a operacao que deseja fazer (+, -, *, /): ");
    scanf(" %c", &opcao);

    switch (opcao)
    {
    case '+':
        resultado = valor1 + valor2;
        printf("O resultado foi: %d \n", resultado);
        break;
    case '-':
        resultado = valor1 - valor2;
        printf("O resultado foi: %d \n", resultado);
        break;
    case '*':
        resultado = valor1 * valor2;
        printf("O resultado foi: %d \n", resultado);
        break;
    case '/':
        if (valor2 == 0) {
            printf("Erro: Divisao por zero nao e permitida.\n");
        } else {
            resultado = valor1 / valor2;
            printf("O resultado foi: %d \n", resultado);
        }
        break;
    default:
        printf("Operacao invalida.\n");
        break;
    }

    // Usar getchar() para pausar
    printf("Pressione Enter para sair...");
    getchar(); // Captura o Enter pressionado
    getchar(); // Captura o Enter pressionado novamente

    return 0;
}
