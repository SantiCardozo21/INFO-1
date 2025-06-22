#include <stdio.h>

int main() {
	
	int numEstudiantes;
	float calificacion, sumaCalificaciones = 0;
	float calificacionMaxima = -1, calificacionMinima = 101; 
	int i;
	
	do {
		printf("Ingrese la cantidad de estudiantes: ");
		scanf("%d", &numEstudiantes);
		if (numEstudiantes <= 0) {
			printf("Error: La cantidad de estudiantes debe ser un n�mero positivo.\n");
		}
	} while (numEstudiantes <= 0);
	
	for (i = 0; i < numEstudiantes; i++) {
		do {
			printf("Ingrese la calificaci�n del estudiante %d (0-100): ", i + 1);
			scanf("%f", &calificacion);
			if (calificacion < 0 || calificacion > 100) {
				printf("Error: La calificaci�n debe estar en el rango de 0 a 100.\n");
			}
		} while (calificacion < 0 || calificacion > 100);
		
		sumaCalificaciones += calificacion;
		
		if (calificacion > calificacionMaxima) {
			calificacionMaxima = calificacion;
		}
		if (calificacion < calificacionMinima) {
			calificacionMinima = calificacion;
		}
	}

	float promedio = sumaCalificaciones / numEstudiantes;
	
	printf("Promedio de calificaciones: %.2f\n", promedio);
	printf("Calificaci�n m�s alta: %.2f\n", calificacionMaxima);
	printf("Calificaci�n m�s baja: %.2f\n", calificacionMinima);
	
	return 0;
}
