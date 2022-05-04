// Ejercicio N:11 Calcular los lados de un
// triangulo conociendo un lado y su angulo opuesto
// WILSON YUJRA QUISPE
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.1415926536
int main (){
	
	float  CA, CO=10, H, a, b=90, g=56,rad,rad1;
	printf("El siguiente programa calcula la \nHIPOTENUSA \nEL CATETO ADYACENTE \nY LOS ANGULOS  ");
	printf("\n\nConciderando que: \n\nCATETO OPUESTO = 10 \nEL ANGULO GAMA = 56");
	a = 180 - 90 - 56;
//	Teniendo en cuenta que 
//	x rad *180/PI = 57.29577951308
//	x grad * PI/180=0.01745329252
	rad = g * PI / 180;
	H = CO / sin(rad);
	printf("\n\nLa hipotenusa es %.2f",H);
	
	rad1 = g * PI / 180;
	CA = CO / tan(rad1);
	printf("\nEl cateto adyacente es %.2f",CA);
	printf("\nEl angulo alfa es: %.1f",a);
	printf("\nEl angulo beta es: %.1f",b);
	printf("\nEl angulo gama es: %.1f",g);	
	getch();
}