// Ejercicio N: 10 Doble de la suma 
// Triple de la resta
// WILSON YUJRA QUISPE
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main (){
	int doble, triple, a, b, s, r; 
	printf("Ingrese el primer valor: ");
	scanf("%i",&a);
	printf("Ingrese el segundo valor: ");
	scanf("%i",&b);
	s = a + b;
	r = a - b;
	doble = 2 * s;
	triple = 3 * r;
	printf("\nLa suma es %i: ",s);
	printf("\nLa resta es %i: ",r);
	printf("\nEl doble de la suma es %i",doble);
	printf("\nEl triple de la resta es %i",triple);
	getch();
}