#include <stdio.h>
int main() {
    
float peso, altura, IMC;

    do {
        printf("Ingrese su peso en kg: ");
        scanf("%f", &peso);
        if (peso < 0) {
            printf("Error: El peso no puede ser negativo. Intente nuevamente.\n");
        }
    } while (peso < 0);

    do {
        printf("Ingrese su altura en metros: ");
        scanf("%f", &altura);
        if (altura < 0) {
            printf("Error: La altura no puede ser negativa. Intente nuevamente.\n");
        }
    } while (altura < 0);

    IMC = peso / (altura * altura);

    printf("Su indice de masa corporal es de: %.2f\n", IMC);
    printf("  Clasificación del IMC\n");
    printf("+---------------------------+----------------------+\n");
    printf("| Indice de Masa Corporal   | Clasificación        |\n");
    printf("+---------------------------+----------------------+\n");
    printf("| Menor a 18.5              |    Bajo peso         |\n");
    printf("| 18.5 - 24.9               |    Normal            |\n");
    printf("| 25.0 - 29.9               |    Sobrepeso         |\n");
    printf("| 30.0 o más                |    Obesidad          |\n");
    printf("+---------------------------+----------------------+\n");

    if (IMC < 18.5) {
        printf("Clasificación: Bajo peso\n");
    } else if (IMC >= 18.5 && IMC < 25.0) {
        printf("Clasificación: Normal\n");
    } else if (IMC >= 25.0 && IMC < 30.0) {
        printf("Clasificación: Sobrepeso\n");
    } else {
        printf("Clasificación: Obesidad\n");
    }

    return 0;
}
