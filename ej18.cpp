// Ejercicio N:18 Realizar un algoritmo que calcule e imprima el 
// numero de segundos que hay en un determinado numero
// WILSON YUJRA QUISPE
#include<stdio.h>
#include<conio.h>
int main(){
	int dias, horas = 24 , min = 60, s = 60, sDias;
	printf("Ingrese el numero de dias: ");
	scanf("%i",&dias);
	sDias = dias * horas * min * s;
	printf("Los segundos respecto los dias son %i",sDias);
	
	getch();
}