//Ejercicio N: 4 area de un triangulo
// WILSON YUJRA QUISPE
#include<stdio.h>
#include<conio.h>
int main(){
	float area, ancho, altura;
	printf("Ingrese el valor del ancho: ");
	scanf("%f",&ancho);
	printf("Ingrese el valor de la altura: ");
	scanf("%f",&altura);
	area = ancho * altura;
	printf("El area del rectangulo es: %.2f",area);
	getch();
}