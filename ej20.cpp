// Ejercicio N:20 Realizar un algoritmo para leer un monto este tiene 
// un interes del 7% anual calcular montos finales para 3 años
// WILSON YUJRA QUISPE
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	float monto, interes, montoFinal, monto1, interes1, montoFinal1;
	float monto2, interes2, montoFinal2;
	printf("ingrese el monto para el primer anio ");
	scanf("%f",&monto);
	interes = (monto * 7) / 100;
	montoFinal = monto + interes;
	printf("El 1ro monto %.2f \nEl interes %.2f \nMonto Final  %.2f ",monto , interes, montoFinal);
	printf("\n\nPara el segundo anio: ");
	monto1 = montoFinal;
	interes1 = (monto1 * 7) / 100;
	montoFinal1 = monto1 + interes1;
	printf("\nEl 2do monto %.2f \nEl interes %.3f \nMonto Final  %.3f ",monto1 , interes1, montoFinal1);
	monto2 = montoFinal1;
	interes2 = (monto2 * 7) / 100;
	montoFinal2 = monto2 + interes2;
	printf("\n\nPara el tercer anio: ");
	printf("\nEl 3er monto %.3f \nEl interes %.5f \nMonto Final  %.5f ",monto2 , interes2, montoFinal2);
	getch();
}