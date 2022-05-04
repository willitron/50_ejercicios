// Ejercicio N:26 AÑO DENACIMIENTO CALCULE LA EDAD SI ES MAYOR DE EDAD
// WILSON YUJRA QUISPE
#include<stdio.h>
#include<conio.h>
int main(){
	int fechaNac, a;
	printf("Ingrese la fecha de nacimiento: ");
	scanf("%i",&fechaNac);
	a = (2022 - fechaNac);
	if(a >= 18){
	printf("La edad es %i Es mayor de edad",a);
	}
	else{
		printf("Es menor de edad");
}
	
	getch();
}