#include <stdio.h>
#include <math.h>

/* 	Nombre: Mateo Guerrero Isuiza
	Código: 20191867*/

int main (){
	// Definición de variables 
	int n, numerador, denominador, resto, curzon; //enteros 
	// Mensaje para ingreso de datos
	printf ("Ingrese el número a evaluar: ");
	// Registro del dato insertado por teclado
	scanf ("%d", &n);
	//Cálculos
	denominador=2*n+1;  // denominador
	numerador=pow(2,n)+1;		// numerador
	resto=numerador%denominador;	// Calcular el resto de la división
	curzon=resto==0; 		// Comprobar si el número es Curzon, 0 Falso, 1 Verdadero
	// Salida de datos
	printf ("El número %d es un número Curzon: %d, porque el residuo de dividir %d entre %d es %d", n,curzon, numerador, denominador, resto);
	return 0;
}
