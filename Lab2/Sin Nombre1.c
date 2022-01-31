#include <stdio.h>
#include <math.h>

/* Nombre: Mateo Guerrero Isuiza
	Código: 20191867 */

int main (){
	//Definir variables de entrada
	int xa,ya,xb,yb,xc,yc,xx,yx;
	double disax,disbx, discx;
	// Entradas
	printf ("Ingrese las coordenadas 'x' y 'y' del punto A: "); //Solicitud de ingreso coordenadas punto A
	scanf ("%d %d", &xa, &ya );                 // Lectura coordenadas A
	printf ("Ingrese las coordenadas 'x' y 'y' del punto B: "); //Solicitud de ingreso coordenadas punto B
	scanf ("%d %d", &xb, &yb );					 // Lectura coordenadas B
	printf ("Ingrese las coordenadas 'x' y 'y' del punto C: "); //Solicitud de ingreso coordenadas punto C
	scanf ("%d %d", &xc, &yc );					 // Lectura coordenadas C
	printf ("Ingrese las coordenadas 'x' y 'y' del punto X: "); //Solicitud de ingreso coordenadas punto X
	scanf ("%d %d", &xx, &yx );					 // Lectura coordenadas X
	//Procedimiento
	disax=sqrt(pow(xx-xa,2)+pow(yx-ya,2));
	disbx=sqrt(pow(xx-xb,2)+pow(yx-yb,2));
	discx=sqrt(pow(xx-xc,2)+pow(yx-yc,2));
	//Salidas
	if (disax<disbx && disax<discx) {
		printf ("El punto más cercano es A.");
	}
	if (disbx<disax && disbx<discx) {
		printf ("El punto más cercano es B.");
	}
	if (discx<disax && discx<disbx) {
		printf ("El punto más cercano es C.\n");
	}	
	return 0;
}
