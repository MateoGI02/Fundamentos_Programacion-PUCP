#include <stdio.h>
#include <math.h>

/*	Nombre: Mateo Guerrero Isuiza	
	C�digo: 20191867*/

//Declaraci�n de funciones
int validar_digitos(char ,char ,char );
	
//Funcion Principal
int main (){
	int i=1;
	char digito1,digito2,digito3;
	while (i){
		printf ("Ingrese lista de n�meros en hexadecimal: ");
		scanf ("%c%c%c", &digito1,&digito2,&digito3);
		transformar_base_10(digito1,digito2,digito3);
		if(validar_digitos(digito1,digito2,digito3))
			i=0;	
	}
	
}

//Funciones

int validar_digitos(char digito1,char digito2,char digito3){
	int dato=0;
	if (digito1=='*' || digito2=='*' ||digito3=='*' )
		dato=1;
	return dato;
}


