#include <stdio.h>
#include <math.h>
#define PRECISION 0.000001

/* Nombre: Mateo Guerrero Isuiza
	Código: 20191867 */
	
// Declaración funciones
void leer_entrada1 (double *, int *);
int validar_entrada1(int );
void calcular_valor_esperado(double , double *);
void calcular_valor_del_experimento(double , int, double);
void calcular_sumatoria(double, int , double *);
int validar_interacciones( int );

//Función principal
int main (){
	double valorx,valor_esperado;  //Definir variables de calculo
	int cantidad_experimentos;		//Definir variable contadora
	//Entrada
	leer_entrada1(&valorx, &cantidad_experimentos);  //Lectura de entradas
	//Selectiva de Validación
	if (validar_entrada1(cantidad_experimentos)){
		calcular_valor_esperado(valorx, &valor_esperado);  //Funcion calcular el valor esperado
		calcular_valor_del_experimento(valorx ,cantidad_experimentos, valor_esperado);  //Función bucle que calcula el valor en cada experimento
	}else{  //Condicional FALSO
		printf ("La cantidad de experimentos es inválida.");  //No se aceptan los datos y cierra el proceso
	}
}

//Funciones
//Funcion de lectura del número x y la cantidad de experimentos
void leer_entrada1 (double *numero, int *cantidad){
	printf ("Ingrese el valor de x: ");
	scanf("%lf", numero);
	printf ("Ingrese cantidad de experimentos: ");
	scanf("%d", cantidad);
}

//Función que valida que la cantidad de experimentos sea mayor a 0
int validar_entrada1( int cantidad){
	int dato=0;
	if (cantidad>0)
		dato=1;
	return dato;
}

// Función que calcula el valor esperado de la ecuación 1/1-x
void calcular_valor_esperado(double numero, double *valor_esperado){
	*valor_esperado=1/(1-numero);
	printf ("El valor esperado es: %lf\n", *valor_esperado);
}

//Función bucle que calcula el valor obtenido por experimento mediante la sumatoria n de taylor
void calcular_valor_del_experimento(double numero, int cantidad, double valor1){
	//Definir variables
	int i=1, i2=0;
	int cantidad_interacciones, precision=0;
	double sumatoria;
	//Bucle 
	while (i<=cantidad){
		//Entradas de experimento i
		printf ("Ingrese cantidad de iteraciones para experimento %d: ", i);
		scanf("%d", &cantidad_interacciones);
		//Validación del experimento i
		if (validar_interacciones(cantidad_interacciones)){
			calcular_sumatoria(numero, cantidad_interacciones, &sumatoria);	//Función que calcula sumatoria 
			//Condicional que permite reconocer un dato con la más alta precisión y que sea la primera interacción que nos da esta precisión
			if (fabs(sumatoria-valor1)<PRECISION && i2==0){
				precision=cantidad_interacciones;  //Precisión toma el valor de la cantidad de interacciones
				i2++;  //Variable de contador aumenta para que otro experimento que nos de un valor con la misma precisión no reemplace el ya obtenido
			}	
		}
		else
		printf ("Valor de la cantidad interacciones inválido, debe ser un número positivo\n"); //Condicional negativa en caso se de un número de interacciones inválido
		i++;
	}
	printf ("La mejor precisión se logra con %d iteraciones\n", precision); //Salida 2, se imprimer la mejor cantidad de interacciones para una buena precisión
}


//Función valida cantidad de interacciones mayor a 0
int validar_interacciones( int cantidad){
	int dato=0;
	if (cantidad>0)
		dato=1;
	return dato;
}

//Calcula el valor de la sumatoria de taylor
void calcular_sumatoria(double numero, int cantidad, double *suma){
	int i=1;
	*suma=1; //Suma empieza en 1 pues el valor de la cantidad de interacciones es mayor a 0
	while (i<cantidad){
		*suma+=pow(numero,i);
		i++;
	}
	printf ("El valor obtenido es: %lf.\n", *suma);
}
