// COMPRAR DOS NUMERO A Y B
// WILSON YUJRA QUISPE
#include<stdio.h>
#include<conio.h>
int main(){
	int a, b;
	printf("Ingrese el primer numero: ");
	scanf("%i",&a);
	printf("Ingrese el segundo numero: ");
	scanf("%i",&b);
	if(a > b){
		printf("El primer numero %i es mayor que el segundo numero %i",a ,b);
		if(a < b){
			printf("El segundo numero %i es mayor que primer numero %i",b,a);
		}
	}
	else{
		printf("Los numeros %i y %i son iguales ",b,a);
	}
	getch();
}