#include <stdio.h>
#include <math.h>

/* Nombre: Mateo Guerrero Isuiza
	Código: 20191867*/
	
// Declaración de funciones
void leer_cantidad (int *);
int validar_cantidad(int );
void calcular_graficos (int );
void leer_coeficientes (int, int *,int *, int *,int *,int *);
int validar_coeficientes(int , int );
void tipo_grafico (int ,int , int ,int ,int, int *,int *, int *,int * );
void impresion_tipo_grafico (int ,int ,int ,int );


//Función principal
int main (){
	//Definición de variables
	int cantidad_funciones;
	//Entradas
	leer_cantidad (&cantidad_funciones);
	//Proceso
	if (validar_cantidad(cantidad_funciones)){   //Validación
		//Lectura de coeficientes - Reconocimiento del tipo de ecuación y Salidas
		calcular_graficos(cantidad_funciones);		
	}else    //Salida 2 - Entrada de cantidad invalida
		printf ("La cantidad de funciones debe ser un número mayor que cero");
}


//Funciones

//Funcion de lectura de entrada principal (cantidad)
void leer_cantidad (int *cantidad){
	printf ("Ingrese la cantidad de funciones: ");
	scanf ("%d", cantidad);
}

//Función para validar que la cantidad es aceptable 
int validar_cantidad(int cantidad_funciones){
	int dato=0;  //Variable en estado de falsedad (determina la validez)
	if (cantidad_funciones>0)  //Condicional para validar la variable dato
		dato=1;				//Valor verdadero en la variable dato
	return dato;		//Se devuelve el valor de la variable dato 
}

//Función para el proceso de lectura-reconomiento y la salida 
void calcular_graficos (int cantidad){
 	//Definición de Variables 
	int coeficientea, coeficienteb, coeficientec, coeficiented, coeficientee;  //Variables de cociente
	int cont_parabola=0,cont_circunferencia=0, cont_elipse=0,cont_hiperbola=0;		//Variables contadores de tipos de gráfico (inician en 0)
	int i=1;  //Variable de control (Determina el número de ecuación que se va a analizar
	while (i<=cantidad){  //Bucle para el proceso por cantidad de ecuación a realizar 
		//Entrada
		leer_coeficientes (i,&coeficientea,&coeficienteb, &coeficientec,&coeficiented,&coeficientee); //Lectura de coeficientes
		//Salida
		if (validar_coeficientes(coeficientea,coeficienteb))  //Validación de coeficientes validos para una ecuación admitida
			//Función que determina el tipo de gráfico e imprime su tipo 
			tipo_grafico(coeficientea,coeficienteb, coeficientec,coeficiented,coeficientee,&cont_parabola,&cont_circunferencia, &cont_elipse,&cont_hiperbola);
		else
			printf ("Ambos coeficientes a y b no pueden ser igual a cero a la vez\n\n");
		//Aumento variable de control (número de ecuación)
		i++;
	}
	//Salida Final (Muestra la cantidad de gráficos obtenidos por tipo)
	impresion_tipo_grafico (cont_parabola,cont_circunferencia,cont_elipse,cont_hiperbola);
}

//Función de lectura de entradas de la ecuación i
void leer_coeficientes (int i, int *coeficiente1,int *coeficiente2, int *coeficiente3,int *coeficiente4,int *coeficiente5){
	//Entradas
	printf ("Dada la ecuacion cuadrática %d: ax^2 + by^2 + cx + dy + e = 0\n",i);
	printf ("Ingrese el coeficiente a: ");
	scanf ("%d", coeficiente1);
	printf ("Ingrese el coeficiente b: ");
	scanf ("%d", coeficiente2);
	printf ("Ingrese el coeficiente c: ");
	scanf ("%d", coeficiente3);
	printf ("Ingrese el coeficiente d: ");
	scanf ("%d", coeficiente4);
	printf ("Ingrese el coeficiente e: ");
	scanf ("%d", coeficiente5);
}

// Función de validación de ecuación
int validar_coeficientes(int coeficiente1, int coeficiente2){
	int dato=0; // Variable de validación (Estado FALSO o 0)
	if (coeficiente1!=0 || coeficiente2!=0) // condicional para validar la variable dato
		dato=1;		//Variable dato validada  (Estado VERDADERO o 1)
	return dato; 	//Se devuelve el valor de la variable dato 
}

//Función que determina el tipo de ecuación (su gráfico)
void tipo_grafico (int coeficiente1,int coeficiente2, int coeficiente3,int coeficiente4,int coeficiente5, int *parabola,int *circunferencia, int *elipse,int *hiperbola){
	//Condicionales anidadas
	if ((coeficiente1==0 && coeficiente2!=0)||(coeficiente2==0 && coeficiente1!=0)){ //Condicional en caso la ecuación sea una parábola
		//Salida 1
		printf ("La figura es una parabola\n"); // Verdadero - Se imprime que la ecuación es una parábola
		*parabola=*parabola+1; // Se aumenta  el contador de parabolas
		if (coeficiente1>0 ) //Condicional para saber si la parábola es positiva o negatica 
			printf ("La parabola se abre hacia arriba\n\n"); //Se valida coeficiente positivo y la parábola hacia arriba
		else {
			if (coeficiente1<0)
			printf ("La parabola se abre hacia abajo\n\n"); //FALSO- Parábola negativa
		}
		if (coeficiente2>0 ) //Condicional para saber si la parábola es positiva o negatica 
			printf ("La parabola se abre hacia la derecha\n\n"); //Se valida coeficiente positivo y la parábola hacia arriba
		else {
			if (coeficiente2<0)
			printf ("La parabola se abre hacia la izquierda\n\n"); //FALSO- Parábola negativa
		}	
	}else{ //FALSO A PARÁBOLA 
		if (coeficiente1== coeficiente2){ //Condicional de circunferencia (coeficientes iguales) 
			printf ("La figura es una circunferencia\n\n"); // Verdadero - Se imprime que la ecuación es una circunferencia
			*circunferencia=*circunferencia+1; // Se aumenta  el contador de circunferencias
		}else{ //FALSO CIRCUNFERENCIA
			if ((coeficiente1!=coeficiente2 && coeficiente1>0 && coeficiente2>0)||(coeficiente1!=coeficiente2 && coeficiente1<0 && coeficiente2<0)){//Condicional de elipse 
				printf ("La figura es una elipse\n\n"); // Verdadero - Se imprime que la ecuación es una elipse
				*elipse=*elipse+1; // Se aumenta  el contador de elipses
			}else{ //FALSO ELIPSE
				if ((coeficiente1!=coeficiente2 && coeficiente1>0 && coeficiente2<0)||(coeficiente1!=coeficiente2 && coeficiente1<0 && coeficiente2>0)){ //Condicional de elipse 
				printf ("La figura es una hipérbola\n\n"); // Verdadero - Se imprime que la ecuación es una hiperbola
				*hiperbola=*hiperbola+1; // Se aumenta  el contador de hiperbolas
				}
			} 
		} 
	}
}

//Función de impresión de la salida final
void impresion_tipo_grafico (int parabola,int circunferencia,int elipse,int hiperbola){
	//Salidas - Salida final
	printf ("Los resultados finales son\n");
	printf ("Cantidad de parábolas: %d\n",parabola);
	printf ("Cantidad de circunferencias: %d\n",circunferencia);
	printf ("Cantidad de elipses: %d\n",elipse);
	printf ("Cantidad de hipérbolas: %d\n",hiperbola);
}
