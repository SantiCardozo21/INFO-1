#include <stdio.h>

int main()
{
	float peso, altura, IMC;
	
	printf("Ingrese su peso en kg: ");
	scanf("%f",&peso);
	printf("Ingrese su altura en metros: ");
	scanf("%f",&altura);
	
	IMC= peso/(altura*altura);
	
	printf("Su indice de masa corporal es de: %.2f",IMC);
	printf("\n  Clasificación del IMC\n");
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
