//Ejercicio N: 8 calcular el volumen de una esfera
// WILSON YUJRA QUISPE
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	float volumen, radio;
	printf("Ingrese el valor del radio: ");
	scanf("%f",&radio);
	volumen = (4 * 3.1416 * pow (radio , 3)) /3;
	printf("El volumen  de la esfera es: %.2f",volumen);
	getch();
}