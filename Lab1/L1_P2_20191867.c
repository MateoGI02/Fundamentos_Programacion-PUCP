#include <stdio.h>
#include <math.h>

/* 	Nombre: Mateo Guerrero Isuiza
	C�digo: 20191867*/

int main (){
	// Definici�n de variables 
	int n, numerador, denominador, resto, curzon; //enteros 
	// Mensaje para ingreso de datos
	printf ("Ingrese el n�mero a evaluar: ");
	// Registro del dato insertado por teclado
	scanf ("%d", &n);
	//C�lculos
	denominador=2*n+1;  // denominador
	numerador=pow(2,n)+1;		// numerador
	resto=numerador%denominador;	// Calcular el resto de la divisi�n
	curzon=resto==0; 		// Comprobar si el n�mero es Curzon, 0 Falso, 1 Verdadero
	// Salida de datos
	printf ("El n�mero %d es un n�mero Curzon: %d, porque el residuo de dividir %d entre %d es %d", n,curzon, numerador, denominador, resto);
	return 0;
}
