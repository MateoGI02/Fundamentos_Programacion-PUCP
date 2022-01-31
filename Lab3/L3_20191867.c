#include <stdio.h>
#include <math.h>
#define PI 3.14152

/* Nombre: Mateo Guerrero Isuiza
	Código: 20191867 */
	
int main (){
	//Declaración de variables 1
	double xP, yP, xQ, yQ;
	//Entrada 1 - Circunferencia 1
	printf ("Ingrese las coordenadas del punto P: ");  	//P(xP,yP)
	scanf ("%lf %lf", &xP, &yP);	//Lectura de coordenadas P(xP,yP)
	printf ("Ingrese las coordenadas del punto Q: ");	//Q(xQ,yQ)
	scanf ("%lf %lf", &xQ, &yQ); 	//Lectura de coordenadas Q(xQ,yQ)
	//Procesamiento 1 - Centro Circunferencia 1, Radio Circunferencia 1, Área Circunferencia 1, 
	//Centro C(xr,yr) de circunferencia 1
	double xr=(xP+xQ)/2; 	//Coordenada x del centro o punto radial	
	double yr=(yP+yQ)/2;	//Coordenada y del centro o punto radial	
	//Radio circunferencia 1
	double radioc1=sqrt(pow(xr-xP,2)+pow(yr-yP,2)); //Calculo radio	
	//Área circunferencia 1
	double areac1=PI*pow(radioc1,2);
	//Salida 1 - Datos  circunferencia 1
	printf ("El centro de la circunferencia formado por el punto medio de P(%.3lf,%.3lf) y Q(%.3lf,%.3lf) es (%.3lf,%.3lf)\n", xP, yP, xQ, yQ, xr, yr);
	printf ("El radio de la circunferencia al cual pertenecen los puntos P(%.3lf,%.3lf) y Q(%.3lf,%.3lf) es %.3lf\n",xP, yP, xQ, yQ, radioc1);
	printf ("El area de la circunferencia al cual pertenecen los puntos P(%.3lf,%.3lf) y Q(%.3lf,%.3lf) es %.3lf\n",xP, yP, xQ, yQ, areac1);
	//Declaración de variables 2
	double xZ, yZ;
	int interacciones;
	//Entrada 2
	printf ("Ingrese la cantidad de puntos a procesar: ");  
	scanf ("%d", &interacciones);
	int i=1; 	//Variable de condicional que controla la interactiva 
	int cantpuntdec1=0; //Cantidad de puntos de c1 (que pertecen a c1)
	int cantpuntnoc1=0; //Cantidad de puntos de c1 (que pertecen a c1)
	double ydexmax;   //Valor de la coordenada y del punto con máximo x
	double xmax=-99999999;  // Valor de coordenada x máxima
	//Proceso 2 - Calculos de valores para puntos i (número de puntos a procesar)
	while (i<=interacciones) {
		//Entrada punto i
		printf ("Ingrese las coordenadas del punto Z: ");  	//Z(xZ,yZ)
		scanf ("%lf %lf", &xZ, &yZ);
		//Proceso del punto i
		double radioz=sqrt(pow(xr-xZ,2)+pow(yr-yZ,2)); //Calculo radio (diferencia P a C)
		//Salida de datos por punto i
		printf ("El radio es %lf\n", radioz);
		// Selectiva para mostrar pertenencia o no de Z a C1 y contador de puntos que pertenecen y no pertenecen
		if (fabs(radioc1-radioz)<0.0001) {    //Punto que pertenecen
			printf ("El punto Z(%.3lf,%.3lf) pertenece a la circunferencia con centro C(%.3lf,%.3lf) y radio %.3lf\n",xZ,yZ,xr,yr,radioc1);
			cantpuntdec1++; //Cuenta un punto que pertenece a c1
			
		} else{    //Puntos que no pertenecen
			printf ("El punto Z(%.3lf,%.3lf) NO pertenece a la circunferencia con centro C(%.3lf,%.3lf) y radio %.3lf\n",xZ,yZ,xr,yr,radioc1);
			cantpuntnoc1++; //Cuenta un punto que NO pertenece a c1
		}
		//Establecer el punto de mayor coordenada x para puntos que pertenecen
		if (xZ>xmax && fabs(radioc1-radioz)<0.0001){
			xmax=xZ;
			ydexmax=yZ;	//Coordenada y del punto con x máximo		
		}
		i++; //Aumento de variable de control
	}
	//Salida Proceso 2
	printf ("La cantidad de puntos que pertenecen a la circunferencia fue: %d\n",cantpuntdec1); 
	//Salida condicional si existen puntos que pertenecen a la circunferencia 1
	if (cantpuntdec1>0){
		printf ("Las coordenadas del punto que pertenece a la circunferencia con mayor coordenada x fue (%.3lf,%.3lf)\n",xmax,ydexmax);
	}
	printf ("La cantidad de puntos que no pertenecen a la circunferencia fue: %d\n",cantpuntnoc1);
	return 0;
}
