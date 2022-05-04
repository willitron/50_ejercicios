// Ejercicio N:12 Calcular el promedio de tres notas
// WILSON YUJRA QUISPE
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	float promedio, nota1, nota2, nota3;
	printf("Ingres el valor de las tres notas: ");
	scanf("%f %f %f",&nota1 ,&nota2 ,&nota3);
	promedio = (nota1 + nota2 + nota3) / 3;
	printf("El promedio de la nota es: %.2f",promedio);
	getch();
}