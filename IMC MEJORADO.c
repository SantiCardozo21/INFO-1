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
	printf("\n  Clasificaci�n del IMC\n");
	printf("+---------------------------+----------------------+\n");
	printf("| Indice de Masa Corporal   | Clasificaci�n        |\n");
	printf("+---------------------------+----------------------+\n");
	printf("| Menor a 18.5              |    Bajo peso         |\n");
	printf("| 18.5 - 24.9               |    Normal            |\n");
	printf("| 25.0 - 29.9               |    Sobrepeso         |\n");
	printf("| 30.0 o m�s                |    Obesidad          |\n");
	printf("+---------------------------+----------------------+\n");
	
	if (IMC < 18.5) {
		printf("Clasificaci�n: Bajo peso\n");
	} else if (IMC >= 18.5 && IMC < 25.0) {
		printf("Clasificaci�n: Normal\n");
	} else if (IMC >= 25.0 && IMC < 30.0) {
		printf("Clasificaci�n: Sobrepeso\n");
	} else {
		printf("Clasificaci�n: Obesidad\n");
	}
	
	return 0;
}
