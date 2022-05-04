// Ejercicio N:23 LA EMPRESA YPFB
// WILSON YUJRA QUISPE
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int fecha_nac, edad;
	printf("Ingrese su fecha de nacimiento: ");
	scanf("%i",&fecha_nac);
	edad = 2022 - fecha_nac;
	printf("La edad del postulante es: %i",edad);
	getch();
}