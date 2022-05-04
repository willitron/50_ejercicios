//Ejercicio N: 1 Tipo de Cambio
// WILSON YUJRA QUISPE
#include<stdio.h>
#include<conio.h>
int main(){
	float monto,Bs;
	printf("Ingrese el valor en Dolares: ");
	scanf("%f",&monto);
	Bs = monto * 6.95;
	printf("El monto en Bolivianos es: %.2f",Bs);
	getch();
}