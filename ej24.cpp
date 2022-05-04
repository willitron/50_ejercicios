// Ejercicio N:24 ESTUDIANTE AVERIGUA SUS NOTAS DEL LOS DOS PRIMEROS PARCIALES
// WILSON YUJRA QUISPE
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	float parcial1, parcial2, parcial3, nota_aprobar;
	printf("Ingrese la nota del primer parcial ");
	scanf("%f",&parcial1);
	printf("Ingrese la nota del segundo parcial ");
	scanf("%f",&parcial2);
	parcial3 = (parcial1 + parcial2) / 3;
	nota_aprobar = 51 - parcial3;
	printf("La nota para poder aprobar el curso es de: %.2f",nota_aprobar);
	getch();
}