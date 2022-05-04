//Ejercicio N: 2 Conversion de Grados a F
// WILSON YUJRA QUISPE
#include<stdio.h>
#include<conio.h>
int main(){
	float centigrados,f;
	printf("Ingrese la temperatura en grados celcius: ");
	scanf("%f",&centigrados);
	f = ((9 * centigrados) / 5) + 32;
	printf("Los grados en Fahrenheit es: %.2f",f);
	getch();
}