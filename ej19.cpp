// Ejercicio N:19 Crear un programa que pueda convertir una cantidad de segundos
// en hora minutos y segundos
// WILSON YUJRA QUISPE
#include<stdio.h>
#include<conio.h>
int main(){
	int seg, h1 = 24, m1 = 60, s1 = 60, h, m, s;
	printf("Ingrese la cantidad de segundos: ");
	scanf("%i",&seg);
	s = seg % s1;
	m = (seg / s1) % m1;
	h = (seg/(m1*s1)) % h1; 
	printf("\nSon %i Horas",h);
	printf("\nCon %i Minutos",m);
	printf("\nCon %i Segundos",s);
	getch();
}