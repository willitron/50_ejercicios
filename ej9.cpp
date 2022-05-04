//Ejercicio N: 9 hallar el area de un circulo
// WILSON YUJRA QUISPE
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	float area, radio;
	printf("Ingrese el valor del radio: ");
	scanf("%f",&radio);
	area = 3.1416 * pow(radio , 2);
	printf("El volumen  de la esfera es: %.2f",area);
	getch();
}