// Ejercicio N:32 PERIMETRO Y AREA DE UN CUADRADO RECTANGULO Y TRIANGULO
// WILSON YUJRA QUISPE
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int a, b, c, h, area, perimetro;
	int area1, perimetro1, area2, perimetro2;
//	float  cambio;
	printf("Ingrese la primer variable ");
	scanf("%i",&a);
	printf("Ingrese la segunda variable ");
	scanf("%i",&b);
	printf("Ingrese la primer variable ");
	scanf("%i",&c);
	printf("Ingrese el valor de la altura ");
	scanf("%i",&h);
	perimetro = a + a + a + a;
	area = a*a;
	perimetro1 = (2*a)+(2*b);
	area1 = a * b;
	perimetro2 = a + b + c;
	area2 = (a*h)/2;
	printf("cuadrado: \nperimetro = %i \narea = %i",perimetro,area);
	printf("\n\nrectangulo: \nperimetro = %i \narea = %i",perimetro1,area1);
	printf("\n\ntriangulo: \nperimetro = %i \narea = %i",perimetro2,area2);
	getch();
}