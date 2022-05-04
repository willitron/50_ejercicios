// Ejercicio N:14 Determinar la suma de los N
// primeros numeros, use la siguiente formula S=N(N+1)/2
// WILSON YUJRA QUISPE
#include<stdio.h>
#include<conio.h>
int main(){
	int N, suma;
	printf("Ingrese el valor de N: ");
	scanf("%i",&N);
	suma = (N*(N+1))/2;
	printf("La suma de los primeros numeros son: %i",suma);
	
	
	getch();
}