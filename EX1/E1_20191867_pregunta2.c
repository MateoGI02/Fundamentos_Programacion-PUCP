#include <stdio.h>
#include <math.h>
#define R 8.317

/*Nombre:	Mateo Guerrero Isuiza 
	Código: 20191867 */

//Declaración de funciones	
void leer_datos_entrada(double *, double *, char *);
int validar_datos(double , double , char );
void calcular_masa_coeficiente_velocidad(double , double , char );
double calcular_velocidad(double ,double ,double );


//Función principal
int main (){
	//Declaración variable
	double temperatura_C, presion_ATM;
	char tipo_gas;
	//Entrada
	leer_datos_entrada(&temperatura_C, &presion_ATM, &tipo_gas);
	//Validación de datos
	if (validar_datos(temperatura_C, presion_ATM, tipo_gas)){
		//Salida 1.1.1 // Determinar gas y poner lineas
		printf ("Para el gas %c:\n---------------\n", tipo_gas);
		//Proceso y salida 1.1.2
		calcular_masa_coeficiente_velocidad(temperatura_C, presion_ATM, tipo_gas);
	}else {
		//Salida 1.2 Condicional negativa ,error de datos
		printf ("Los datos ingresados son incorrectos");
	}
	return 0;
}

//Funciones

//Función leer entradas
void leer_datos_entrada(double *temperatura, double *presion, char *gas){
	printf ("Ingrese la temperatura(grados C), la presión(atm) y el tipo de gas: ");
	scanf ("%lf %lf %c",temperatura, presion,  gas);
}

//Funcion de validación de datos
int validar_datos(double temperatura, double presion, char gas){
	int dato;
	dato=0;
	//Validación temperatura
	if (temperatura>=0 && temperatura<=200){
		//Validación Presión
		if(presion>=0){
			//Validación gas
			if(gas=='a'|| gas=='A'|| gas=='H'|| gas=='h'|| gas=='n'|| gas=='N'|| gas=='M'|| gas=='m'){
				dato=1;
			}
		}
	}
	
	return dato;
}

//Función calculo masa, coeficiente y velocidad
void calcular_masa_coeficiente_velocidad(double temperatura, double presion, char gas){
	double densidad, temperatura_K, masa_molar, presion_Nporm2,f, coeficiente,velocidad;
	//Selectiva para obtener el valor de la densidad
	if (gas=='a'|| gas=='A'){
	densidad=1.8;
	f=3;	
	} else {
		if (gas=='H'|| gas=='h'){
		densidad=0.09;
		f=5;
		} else {
			if(gas=='n'|| gas=='N'){
				densidad=1.25;
				f=5;
			} else {
				if(gas=='M'|| gas=='m'){
					densidad=0.769;
					f=6;
				}
			}
		}
	
	}
	//Procesamiento
	temperatura_K=temperatura+273;
	presion_Nporm2=presion*1.01325*pow(10,5);
	masa_molar=(R*temperatura_K*densidad)/presion_Nporm2;
	coeficiente=(f+2)/f;
	velocidad=calcular_velocidad(coeficiente, temperatura_K, masa_molar);
	//Salida 1.1.2 Valores obtenidos
			printf ("El coeficiente de dilatación adiabática es: %.2lf\n", coeficiente);
			printf ("La masa molar es: %.6lf kg/mol\n", masa_molar);
			printf ("La velocidad del sonido es: %lf m/s\n", velocidad);	
		
}

//Función velocidad
double calcular_velocidad(double coeficiente,double temperatura,double masa){
	double velocidad;
	velocidad=(sqrt((coeficiente*R*temperatura)/masa))/1000;
	return velocidad;
}
