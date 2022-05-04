//Ejercicio N: 3 Conversion de Kg Lb
// WILSON YUJRA QUISPE
#include<stdio.h>
#include<conio.h>
int main(){
	float kg,lb;
	printf("Ingrese los datos en Kilogramos: ");
	scanf("%f",&kg);
	lb = kg * 2.2046;
	printf("La conversion en Libras es: %.2f",lb);
	getch();
}