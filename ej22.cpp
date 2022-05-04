// Ejercicio N:22 Realizar un algoritmo para calcular el salario neto de un
//trabajador dados el numero de horas trabajadas y la tarifa horaria considere
//un descuento para la AFP del 12.71% 
// WILSON YUJRA QUISPE
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	float salario, salneto, sal_AFP, hrsTrab, tarifa_hrs, AFP = 12.71;
	printf("Ingrese el pago de 1 hora trabajada en Bs: ");
	scanf("%f",&tarifa_hrs);
	printf("Ingrese las horas trabajadas: "),
	scanf("%f",&hrsTrab);
	salario = tarifa_hrs * hrsTrab;
	sal_AFP = (salario * AFP) / 100;
	salneto = salario - sal_AFP;
	printf("\nEl salario Neto del trabajador \nCon aporte a las AFP es: %.2f",salneto);
	
	getch();
}