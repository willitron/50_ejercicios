//Ejercicio N: 6 Calcular el volumen de un cilindro
// WILSON YUJRA QUISPE
#include<stdio.h>
#include<conio.h>
int main(){
	float volumen, radio, altura;
	printf("Ingrese el valor de r: ");
	scanf("%f",&radio);
	printf("Ingrese el valor de la altura: ");
	scanf("%f",&altura);
	volumen = 3.1416 * radio * radio * altura;
	printf("El volumen  es: %.2f",volumen);
	getch();
}