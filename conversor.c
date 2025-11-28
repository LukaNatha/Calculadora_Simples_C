#include <stdio.h>
#include <math.h>

int main() {
    int opção;
    double a, b, resultado;

    while(1) {
        printf("\n Calculadora \n");
        printf("1 - Soma\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        printf("5 - Potencia\n");
        printf("6 - Raiz Quadrada\n");
        printf("7 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opção);
        if (opção == 7) break;

        if (opção >= 1 && opção <= 5) {
            printf("Digite o primeiro valor: ");
            scanf("%lf", &a);
            printf("Digite o segundo valor: ");
            scanf("%lf", &b);
        }

        if (opção == 1) resultado = a + b;
        else if (opção == 2) resultado = a - b;
        else if (opção == 3) resultado = a * b;
        else if (opção == 4) {
            if (b == 0) {
                printf("Erro: divisao por zero.\n");
                continue;
            }
            resultado = a / b;
        }
        else if (opção == 5) resultado = pow(a, b);
        else if (opção == 6) {
            printf("Digite o valor: ");
            scanf("%lf", &a);
            if (a < 0) {
                printf("Erro: nao existe raiz real.\n");
                continue;
            }
            resultado = sqrt(a);
        }
        else {
            printf("opção invalida.\n");
            continue;
        }

        printf("Resultado: %.2lf\n", resultado);
    }

    return 0;
}