#include <stdio.h>
#include <math.h>

/*Nombre: Mateo Guerrero Isuiza
Código: 20191867*/

//Declaración funciones
int MCD(int , int );
int validar_datos(int , char );
void sumar_fracciones(int );
void restar_fracciones(int );

//Función principal
int main (){
	//Declaración Variables
	char operacion;
	int cant_fracciones, numerador1, denominador1, numeradori, denominadori;
	//Entradas
	printf("Ingrese cantidad de fracciones: ");
	scanf ("%d", &cant_fracciones);
	printf("Ingrese operación: ");
	scanf ("%s", &operacion);
	//Proceso y Salidas
	if (validar_datos(cant_fracciones,operacion)){
		if (operacion=='+'){
			sumar_fracciones(cant_fracciones);
		}else {
			restar_fracciones(cant_fracciones);
		}
	}else {
		//Salida 1.2 de datos invalidos
		printf("Los datos ingresados son inválidos.");
	}
}

//Funciones


//Funcion del MCD de dos números
int MCD(int a, int b){
	int divisor;
	if (a>=b)
		divisor=b;
	else
		divisor=a;
	while (divisor>=1){
	if (a % divisor==0 && b %divisor==0)
		return divisor;
	divisor--;
	}
}

//Función validar datos
int validar_datos(int cant_fracciones, char operacion){
	int dato=0;
	if (cant_fracciones>=2){
		if (operacion=='+'||operacion=='-'){
			dato=1;
		}
	}
	return dato;
}

void sumar_fracciones(int cant_fracciones){
	int numeradori, denominadori, numerador1, denominador1;
	int i=2;
	printf("Ingrese numerador y denominador:");
	scanf ("%d %d", &numerador1, &denominador1);
	while (i<=cant_fracciones){
		printf("Ingrese numerador y denominador:");
		scanf ("%d %d", &numeradori, &denominadori);
		numerador1=(((denominador1*denominadori/MCD(denominador1,denominadori))/denominador1)*numerador1)+(((denominador1*denominadori/MCD(denominador1,denominadori))/denominadori)*numeradori);
		denominador1=denominador1*denominadori/MCD(denominador1,denominadori);
		i++;
	}
	printf("El resultado de la operación es: %d / %d", numerador1, denominador1 );
}

void restar_fracciones(int cant_fracciones){
	int numeradori, denominadori, numerador1, denominador1;
	int i=2;
	printf("Ingrese numerador y denominador:");
	scanf ("%d %d", &numerador1, &denominador1);
	while (i<=cant_fracciones){
		printf("Ingrese numerador y denominador:");
		scanf ("%d %d", &numeradori, &denominadori);
		numerador1=(((denominador1*denominadori/MCD(denominador1,denominadori))/denominador1)*numerador1)-(((denominador1*denominadori/MCD(denominador1,denominadori))/denominadori)*numeradori);
		denominador1=denominador1*denominadori/MCD(denominador1,denominadori);
		i++;
	}
	printf("El resultado de la operación es: %d / %d", numerador1, denominador1 );
}



