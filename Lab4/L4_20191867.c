#include <stdio.h>
#include <math.h>

/*	Nombre: Mateo Guerrero Isuiza
	C�digo: 20191867*/

//Declaraci�n Funciones 
void leer_opcion (char *);
void leer_numeros (int *, int *, int *);
void identificar_si_los_numero_son_primo(int , int , int );
void validar_si_es_primo(int );
void evaluar_si_al_menos_un_numero_es_abundante(int , int , int );
int validar_si_un_numero_es_abundante(int );

//Funcion principal
int main (){
	//Declaraci�n variables
	char opcion; 
	int numero1, numero2, numero3;
	//Entradas
	leer_opcion(&opcion);  //Funcion de lectura de la opcion
	//Proceso
	//Selectiva de opci�n
	if (opcion=='#'){    //Opcion primos
		//Entrada n�meros
		leer_numeros(&numero1, &numero2, &numero3);  // Funcion de lectura de n�meros
		//Proceso y salida
		identificar_si_los_numero_son_primo(numero1, numero2, numero3);  //Funcion para ver si son primos e imprime salidas (si cada numero es primo o no)
	} 
	if (opcion=='%'){  //Opci�n n�mero abundante
		//Entrada
		leer_numeros(&numero1, &numero2, &numero3);  // Funcion de lectura de n�meros
		//Proceso y salida
		evaluar_si_al_menos_un_numero_es_abundante(numero1, numero2, numero3);  //Funcion para ver si hay un abundante e imprime salida (hay al menos un abundante)
	} 
	if (opcion!='%' && opcion!='#') {  //Opci�n no v�lida
		printf ("Opci�n no v�lida\n");     //Imprime en caso no se ingrese una opci�n v�lida
	}
	return 0;
}


//Funciones Secundarias

//Funcion leer opcion en valor alfanum�rico
void leer_opcion (char *opcion){
	printf ("Ingrese la opcion: ");  //Escribe en pantalla la solicitud de opcion
	scanf ("%c", opcion);      //Lee la variable opcion
}

//Funci�n Leer los 3 numeros
void leer_numeros (int *numero1, int *numero2, int *numero3){
	printf ("Ingrese los numeros a evaluar: ");	//Escribe en pantalla la solicitud de ingreso de 3 n�meros
	scanf ("%d %d %d", numero1, numero2, numero3);	//Lee los 3 n�meros ingresados
}

//Funci�n para reconocer los n�meros primos
void identificar_si_los_numero_son_primo(int numero1, int numero2, int numero3){	
	validar_si_es_primo (numero1);  //Funcion valida n�mero primo e imprime
	validar_si_es_primo (numero2);  //Funcion valida n�mero primo e imprime
	validar_si_es_primo (numero3);	//Funcion valida n�mero primo e imprime
}

//Funci�n que reconoce n�mero primo y lo imprime (0 no es primo, 1 si es primo)
void validar_si_es_primo(int numero){
	int i=1;     //Divisor, variable de aumento
	int cont_divi=0;    //Contador divisores
	while (i<=numero){
		int resto=numero%i;    //Calculo del resto
		if (resto==0){		//Si el resto es 0, es un divisor
			cont_divi++;	//Se cuenta un divisor
		}
		i++; 				//Se aumenta el valor del divisor 
	}
	printf ("Evaluacion del n�mero %d si es primo (1 si es verdadero y 0 si es falso) = %d\n", numero, cont_divi==2);  //Salida que muestra si el n�mero es primo o no
}

void evaluar_si_al_menos_un_numero_es_abundante(int numero1, int numero2, int numero3){	
	int cont_abundantes;  //Contador de numeros abundantes
	//Calculo del contador de n�mero de abundantes
	//Funcion "validar_si_un_numero_es_abundante" devuelve 1 si el n�mero es abundante
	//Si el contador de abundantes es mayor a 0, al menos 1 n�mero es abundante
	cont_abundantes=validar_si_un_numero_es_abundante(numero1)+validar_si_un_numero_es_abundante(numero2)+validar_si_un_numero_es_abundante(numero3);
	//Salida si existe al menos un n�mero abundante
	printf ("Al menos uno de los numeros ingresados es abundante (1 si es verdadero y 0 si es falso) = %d \n", cont_abundantes>0);
}

//Funci�n que reconoce n�mero abundante y devuelve un valor de 1
int validar_si_un_numero_es_abundante(int numero){
	int i=1; //Variable de aumento, divisor
	int abundante=0;	//Variable que dice si un valor es abundante o no (1 abundante, 0 no es abundante)
	int suma=0;		//Suma de los divisores
	while (i<numero){		//Bucle para calcular los divisores y su suma (excluyendo el numero)
		int resto=numero%i; //Se calcula el resto de dividir el n�mero entre un divisor
		if (resto==0){		//Se valida si i es un divisor
			suma=suma+i;	//Si i es divisor se suma 
		}
		i++; 		//Aumento del divisor
	}
	if (suma>numero){		//Se valida la suma es mayor al numero 
		abundante=1;		//Si la suma es mayor es abundante y se devuelve el valor de 1 (que luego se suma)
	}
	return abundante;  //Devuelve valor de validaci�n (1 abundante, 0 no es abundante)
}

