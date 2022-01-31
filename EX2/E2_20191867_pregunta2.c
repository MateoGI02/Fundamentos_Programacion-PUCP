#include <stdio.h>
#include <math.h>

/*Nombre: Mateo Guerrero Isuiza
Código: 20191867*/

//Declaración funciones o Módulos
void leer_entrada_rango(int *, int *, int *);
int validar_datos(int , int , int );

//Función principal 
int main (){
	int min_rango, max_rango, cantidad_primos;
	leer_entrada_rango(&min_rango, &max_rango, &cantidad_primos);
	if (validar_datos(min_rango, max_rango, cantidad_primos)){
		printf("Los números encontrados son: ");
		int contador_primos=0;
		int i=1;
		int i2=1, i3=1;
		int suma=0;
		while (suma<=max_rango && contador_primos<cantidad_primos){
			int suma=i2+i3;
			i2=i3;
			i3=suma;
			if (suma>=min_rango && verificador_primo(suma) && suma<=max_rango){
				contador_primos++;
				printf("%d ",suma);
			}
			i++;
			if (suma>max_rango)
				break;
		}
	}	
	else 
		printf ("Error al ingresar los datos de entrada.");	
}

//Funciones o Módulos

//Función para leer datos de entrada, valores del rango
void leer_entrada_rango(int *numero_minimo, int *numero_maximo, int *cantidad){
	printf ("Ingrese rango de evaluación: ");
	scanf ("%d %d", numero_minimo,numero_maximo);
	printf ("Ingrese cantidad de números primos: ");
	scanf ("%d", cantidad);
}

int validar_datos(int minimo, int maximo, int cantidad){
	if (minimo>=0 && minimo<maximo && cantidad>=1 && maximo<=2147483647)
		return 1;
	else 
		return 0;
}

int verificador_primo(int numero){
	if (numero<=0)
		return 0;
	int i=1;
	int contador_divisores=0;
	while (i<=numero){
		if (numero%i==0){
			contador_divisores+=1;
		}
		if (contador_divisores==2 && i<numero){
			return 0;
		} else if (contador_divisores==2 && i==numero){
			return 1;
		}
		i++;
	}
}
