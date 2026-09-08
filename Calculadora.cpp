#include <stdio.h>
#include <math.h>

int main() {

    int opcao;
    int num1, num2;
    double numero;

    printf("========== CALCULADORA ==========\n");
    printf("1 - Divisao\n");
    printf("2 - Modulo\n");
    printf("3 - Seno\n");
    printf("4 - Ceil\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {

        case 1:
            printf("\nDigite o primeiro numero: ");
            scanf("%d", &num1);

            printf("Digite o segundo numero: ");
            scanf("%d", &num2);

            if (num2 != 0) {
                printf("Resultado: %d\n", num1 / num2);
            } else {
                printf("Erro: nao e possivel dividir por zero!\n");
            }
            break;

        case 2:
            printf("\nDigite o primeiro numero: ");
            scanf("%d", &num1);

            printf("Digite o segundo numero: ");
            scanf("%d", &num2);

            if (num2 != 0) {
                printf("Resultado: %d\n", num1 % num2);
            } else {
                printf("Erro: nao e possivel usar modulo por zero!\n");
            }
            break;

        case 3:
            printf("\nDigite um numero em radianos: ");
            scanf("%lf", &numero);

            printf("Seno: %.2lf\n", sin(numero));
            break;

        case 4:
            printf("\nDigite um numero: ");
            scanf("%lf", &numero);

            printf("Ceil: %.2lf\n", ceil(numero));
            break;

        default:
            printf("\nOpcao invalida!\n");
    }

    return 0;
}