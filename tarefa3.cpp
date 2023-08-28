#include <stdio.h>

int main() {
    double salario, salarioMinimo;
    
    printf("Digite o salário do funcionário: ");
    scanf("%lf", &salario);

    printf("Digite o salário mínimo: ");
    scanf("%lf", &salarioMinimo);

    if (salario > salarioMinimo) {
        printf("O funcionário ganha mais do que o salário mínimo.\n");
    } else {
        printf("O funcionário ganha igual ou menos do que o salário mínimo.\n");
    }

    return 0;
}
