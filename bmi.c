#include <stdio.h>

int main(int argc, char *argv[]) {

    float peso, altura, imc;

    printf("Ingrese el peso en kg: ");
    scanf("%f", &peso);

    printf("Ingrese la altura en metros: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("\nSu indice de masa corporal es: %.2f\n\n", imc);

    printf("    Indice    |  Condicion\n");
    printf("    <18.5     |  Bajo peso\n");
    printf(" 18.5 a 24.9  |  Normal\n");
    printf(" 25.0 a 29.9  |  Sobrepeso\n");
    printf("     >=30     |  Obesidad\n");

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
