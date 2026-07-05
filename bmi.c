#include <stdio.h>

int main() {

    float peso, altura, imc;

    do {
        printf("Ingrese el peso en kg: ");
        scanf("%f", &peso);

        if (peso < 0)
            printf("Error. El peso no puede ser negativo.\n");

    } while (peso < 0);

    do {
        printf("Ingrese la altura en metros: ");
        scanf("%f", &altura);

        if (altura < 0)
            printf("Error. La altura no puede ser negativa.\n");

    } while (altura < 0);

    imc = peso / (altura * altura);

    printf("\nSu indice de masa corporal es: %.2f\n", imc);

    printf("\nIndice\t\tCondicion\n");
    printf("<18.5\t\tBajo peso\n");
    printf("18.5 a 24.9\tNormal\n");
    printf("25.0 a 29.9\tSobrepeso\n");
    printf(">=30\t\tObesidad\n");

    printf("\nSu condicion es: ");

    if (imc < 18.5)
        printf("Bajo peso");
    else if (imc < 25.0)
        printf("Normal");
    else if (imc < 30.0)
        printf("Sobrepeso");
    else
        printf("Obesidad");

    return 0;
}
