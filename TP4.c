#include <stdio.h>

int main() {
	int calificacion;
	
	printf("Ingrese la calificaci�n: ");
	scanf("%d", &calificacion);
	
	if (calificacion >= 90) {
		printf("Calificaci�n: A\n");
	} else if (calificacion >= 80) {
		printf("Calificaci�n: B\n");
	} else if (calificacion >= 70) {
		printf("Calificaci�n: C\n");
	} else if (calificacion >= 60) {
		printf("Calificaci�n: D\n");
	} else {
		printf("Calificaci�n: F\n");
	}
	
	return 0;
}
