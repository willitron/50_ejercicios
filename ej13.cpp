// Ejercicio N:12 Calcular el promedio de tres notas
// WILSON YUJRA QUISPE
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int cociente, residuo, a, b;
	printf("Introducir el divisor: ");
	scanf("%i",&a);
	printf("Introducir el dividendo: ");
	scanf("%i",&b);
	cociente = a / b;
	printf("El cociente es: %i",cociente);
	residuo = a % b  ;
	printf("\nEl residuo es: %i",residuo);
	
	getch();
}