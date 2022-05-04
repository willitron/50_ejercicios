// Ejercicio N:33 RENTA DIGNIDAD
// WILSON YUJRA QUISPE
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int a, b;
	printf("Ingrese 1 si el sujeto esta vivo 0 si el sujeto ya fallecio ");
	scanf("%i",&a);
	if(a == 1){
		printf("ingrese la edad del sujeto: ");
		scanf("%i",&b);
		if(b>=60){
			printf("El sujeto puede cobrar la renta dignidad");
		}
		else{
			printf("El sujeto aun no puede cobrar la renta dignidad");
		}
	}
	else {
		printf("El sujeto fallecido no puede cobrar la renta dignidad");
	}
	getch();
}