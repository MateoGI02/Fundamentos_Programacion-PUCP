#include <stdio.h>
#include <math.h>

/*Nombre: Mateo Guerrero Isuiza
	Código:20191867*/

//Declaración de funciones
void lectura_entradas(int *, int *, int *);
int verificar_numero_base(int ,int );
void sumar_numeros_base(int , int , int );


//Función principal
int main (){
	int base, numero1,numero2;
	lectura_entradas(&base, &numero1, &numero2);
	if (base>=3 && base<=9){
		if (verificar_numero_base(numero1,base) && verificar_numero_base(numero2,base)){
			sumar_numeros_base(numero1,numero2,base);
		}else
			printf ("Al menos uno de los números ingresados no es correcto.");
	}else
		printf ("La base ingresada no es correcta");
}

//Funciones
//Función lectura de datos
void lectura_entradas(int *base, int *numero1, int *numero2){
	printf ("Ingrese la base: ");
	scanf ("%d", base);
	printf ("Ingrese el primer número: ");
	scanf ("%d", numero1);
	printf ("Ingrese el primer número: ");
	scanf ("%d", numero2);
}

//Función verifica que el numero este en la bae deseada
int verificar_numero_base(int numero,int base){
	while(numero>=1){
		int resto=numero%10;
		numero=numero/10;
		if (resto>=base)
			return 0;
	}
	return 1;
}

/*Tabla de datos
Interacción         Resto   Base     Número
    0		     	-    	 8 		  95214
    1		     	4   	 8 		   9521
    2		     	1  	  	 8 			952
    3		     	2	  	 8 			95
    4		     	5	  	 8 			9
    5		     	9	  	 8 			0
*/

void sumar_numeros_base(int numero1, int numero2, int base){
	int suma=0;
	int acarreo=0;
	int i=0;
	int digito, digito1,digito2,suma_sin_base;
	int a=numero1;
	int b=numero2;
	while(numero1>=1 || numero2>=1){
		digito1=numero1%10;
		numero1=numero1/10;
		digito2=numero2%10;
		numero2=numero2/10;
		suma_sin_base=digito1+digito2+acarreo;
		if (suma_sin_base>=base){
			digito=(suma_sin_base-base);
			acarreo=1;
		}else{
			digito=suma_sin_base;
			acarreo=0;
		}
		suma=suma+digito*pow(10,i);
		i++;
	}
	printf ("El resultado de la suma de %d y %d en base %d es %d", a, b, base, suma);
}

