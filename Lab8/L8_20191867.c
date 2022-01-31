#include <stdio.h>
#include <math.h>

/*  Nombre: Mateo Guerrero Isuiza
	Código: 20191867 */

//Declaración de funciones
void leer_entrada(int *, int *);
int validar_datos(int , int );
void complemento_dos_del_rango(int , int );
void complemento_dos_numero(int );

	
//Función principal
int main (){
	int minimo, maximo;
	leer_entrada(&minimo, &maximo);
	if (validar_datos(minimo, maximo))
		complemento_dos_del_rango(minimo,maximo);
	else
		printf ("Rango incorrecto");
}

//Funciones
//Función de lectura de la entrada del rango
void leer_entrada(int *minimo, int *maximo){
	printf ("Ingrese el rango de números: ");
	scanf ("%d %d", minimo, maximo);
}

//Función valida los datos de entrada (valor minimo y maximo del rango negativo)
int validar_datos(int numerominimo, int numeromaximo){
	int dato=0;
	if (numerominimo<numeromaximo && numerominimo<0 && numeromaximo<0 && numerominimo>=-8388607)
		dato=1;
	return dato;	
}


//Función que calcula el complemento para los números en el rango ingresado
void complemento_dos_del_rango(int numerominimo, int numeromaximo){
	int i=numerominimo;
	while (i<=numeromaximo){
		printf ("El número %d en complemento a 2 se representa como:\n", i);
		complemento_dos_numero(i);
		i++;
	}
}

//Función que calcula el complemento 2 de un número
void complemento_dos_numero(int numero){
	int acarreo=1,resto,digito, suma=0,i=0;
	int num1=1, num2=1,num3=1,num4=1,num5=1,num6=1,num7=1,num8=1,num9=1,num10=1,num11=1,num12=1,num13=1,num14=1,num15=1,num16=1,num17=1,num18=1,num19=1,num20=1,num21=1,num22=1,num23=1,num24=1;
	numero=numero*-1;
	while (numero>0){
		resto=numero%2;
		//Transforma el valor del digito a su complemento
		if (resto==1)
			resto=0;
		else
			resto=1;
		//Calcula el valor del digito mas su acarreo
		digito=resto+acarreo;
		//Calcula el valor del digito con acarreo
		if (digito>1){
			digito=0;
			acarreo=1;
		} else{
			digito=digito;
			acarreo=0;
		}
		//Guarga el valor del digito según su lugar
		switch (i){
			case 0:
				num1=digito;
				break;
			case 1:
				num2=digito;
				break;
			case 2:
				num3=digito;
				break;
			case 3:
				num4=digito;
				break;
			case 4:
				num5=digito;
				break;
			case 5:
				num6=digito;
				break;
			case 6:
				num7=digito;
				break;
			case 7:
				num8=digito;
				break;
			case 8:
				num9=digito;
				break;
			case 9:
				num10=digito;
				break;
			case 10:
				num11=digito;
				break;
			case 11:
				num12=digito;
				break;
			case 12:
				num13=digito;
				break;
			case 13:
				num14=digito;
				break;
			case 14:
				num15=digito;
				break;
			case 15:
				num16=digito;
				break;
			case 16:
				num17=digito;
				break;
			case 17:
				num18=digito;
				break;
			case 18:
				num19=digito;
				break;
			case 19:
				num20=digito;
				break;
			case 20:
				num21=digito;
				break;
			case 21:
				num22=digito;
				break;
			case 22:
				num23=digito;
				break;	
			case 23:
				num24=digito;
				break;
			default:
				break;												
		}
		numero=numero/2;  //Se calcula el nuevo valor que toma el numero
		i++;
	}
	printf ("%d%d%d%d%d%d%d%d %d%d%d%d%d%d%d%d %d%d%d%d%d%d%d%d\n",num24,num23,num22,num21,num20,num19,num18,num17,num16,num15,num14,num13,num12,num11,num10,num9,num8,num7,num6,num5,num4,num3,num2,num1);		
}




