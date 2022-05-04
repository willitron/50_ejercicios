//Ejercicio N: 5 area de un triangulo Base Y Altura
// WILSON YUJRA QUISPE
#include<stdio.h>
#include<conio.h>
int main(){
	float area, base, altura;
	printf("Ingrese el valor de la base: ");
	scanf("%f",&base);
	printf("Ingrese el valor de la altura: ");
	scanf("%f",&altura);
	area = (base * altura) / 2;
	printf("El area del rectangulo es: %.2f",area);
	getch();
}