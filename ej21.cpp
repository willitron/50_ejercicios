// Leer el precio unitario la camtidad de un articulo
// a comprar y mostrar el precio total a pagar el IVA se suma al total IVA = 13%
// WILSON YUJRA QUISPE
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	float compra, pagar, total_Pagar;
	printf("Ingrese el valor de la compra: ");
	scanf("%f",&compra);
	pagar = (compra * 13) / 100;
	total_Pagar = compra + pagar;
	printf("\nLa compra fue de: %.1f \nMas el IVA es : %.2f \nTotal a pagar: %.2f", compra, pagar, total_Pagar);
	
	getch();
}