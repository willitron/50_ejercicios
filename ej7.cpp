//Ejercicio N: 7 calcular el volumen de un cubo
// WILSON YUJRA QUISPE
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	float volumen, area;
	printf("Ingrese el valor del area: ");
	scanf("%f",&area);
	volumen = pow (area , 3);
	printf("El volumen  es: %.2f",volumen);
	getch();
}