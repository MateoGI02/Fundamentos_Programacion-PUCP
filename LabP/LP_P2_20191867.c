#include <stdio.h>

/*  Nombre: Mateo Guerrero Isuiza
	Código: 20191867*/

int main (){
	//Definición de variables iniciales
	char c1 = 'M', c2 = 'a', c3 = 'm', c4 = 'a';
	// Para el cifrado se le aumenta 3 valores a la letra
	char c1_cifrado = c1+3; // esto cumple por ASCII 
	char c2_cifrado = c2+3;	//En ASCII se cumple añadir +3 pues se respeta el orden mayusculas y minusculas
	char c3_cifrado = c3+3;
	char c4_cifrado = c4+3;
	// Se imprime el código cifrado
	printf ("El mensaje cifrado es %c %c %c %c\n", c1_cifrado, c2_cifrado, c3_cifrado, c4_cifrado);	
	return 0;
}

